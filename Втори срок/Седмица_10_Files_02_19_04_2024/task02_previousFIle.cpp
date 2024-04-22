#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    fstream file("example.txt", ios::out);

    if(!file)
    {
        cout<<"Error!";
        return 1;
    }

    file << str;
    file.close();

    str.clear();
    string buf;
    file.open("example.txt", ios::in);

    if(!file)
    {
        cout<<"Error!";
        return 1;
    }

    while(!file.eof())
    {
        getline(file, buf);
        str = buf;
    }

    file.close();

    int length = str.size();
    file.open("example.txt", ios::app);

    if(!file)
    {
        cout<<"Error!";
        return 1;
    }

    file << endl << length;
    file.close();


    return 0;
}
