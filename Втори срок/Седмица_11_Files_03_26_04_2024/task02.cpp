#include<iostream>
#include<fstream>
using namespace std;
const int max_size = 155;
struct Account
{
    string username;
    string passwrd;
    string first_name;
    string last_name;
    string date_of_birth;
};

struct AccountArr
{
    Account* arr;
    int current_size;
    int max_size;
};

void rgstr(const Account &acc, const string &filename)
{
    fstream fout(filename, ios::app);
    if(!fout)
    {
        cout<<"Error!";
        return;
    }

    fout<<endl;
    fout<<acc.username<<" "<<acc.passwrd<<
        " "<<acc.first_name<<" "<<acc.last_name<<
        " "<<acc.date_of_birth;

    fout.close();
}

void login(const string &filename)
{
    string username, passwrd;
    cout<<"Enter username:"<<endl;
    cin>>username;
    cout<<"Enter password:"<<endl;
    cin>>passwrd;

    ifstream fin(filename);
    if(!fin)
    {
        cout<<"Error!";
        return;
    }

    string buf1, buf2, line;
    while(!fin.eof())
    {
        fin >> buf1;
        if(buf1 == username)
        {
            fin >> buf2;
            if(buf2 == passwrd)
            {
                cout<< buf1 << " " << buf2 << " ";
                getline(fin, line);
                cout<<line;
                break;
            }
        }
    }
    fin.close();
}

void removeUser(const string &filename)
{
    string username;
    cout<<"Enter username:"<<endl;
    cin>>username;

    ifstream fin(filename);
    if(!fin)
    {
        cout<<"Error!";
        return;
    }
    AccountArr acc;
    string buf1;
    while(!fin.eof())
    {
        for(int i = 0; !fin.eof(); i++)
        {   
            /// buf е буфер, който създаваме, за да "пренасяме" информация от файла към променливите в програмата ни
            fin >> buf1;
            acc.arr[i].username = buf1;
            fin >> buf1;
            acc.arr[i].passwrd = buf1;
            fin >> buf1;
            acc.arr[i].first_name = buf1;
            fin >> buf1;
            acc.arr[i].last_name = buf1;
            fin >> buf1;
            acc.arr[i].date_of_birth = buf1;
            acc.current_size++;
            fin.ignore();
        }
    }
    fin.close();

    for(int i = 0; i < acc.current_size - 1; i++)
    {
        if(acc.arr[i].username == username)
        {
            acc.arr[i] = acc.arr[i+1];
        }
    }
    acc.current_size--;

    ofstream fout(filename);
    if(!fout)
    {
        cout<<"Error";
        return;
    }
    for(int i = 0; i < acc.current_size; i++)
    {
        fout<<acc.arr[i].username<<" "<<acc.arr[i].passwrd<<
            " "<<acc.arr[i].first_name<<" "<<acc.arr[i].last_name<<
            " "<<acc.arr[i].date_of_birth<<endl;
    }
    fout.close();
}




int main()
{



    return 0;
}
