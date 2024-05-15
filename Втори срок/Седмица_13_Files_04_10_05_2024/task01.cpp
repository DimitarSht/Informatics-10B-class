#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("task01.cpp");
    if(!fin)
    {
        cout<<"Error!";
        return -1;
    }
    string line;
    while(!fin.eof())
    {
        getline(fin, line);
        cout<<line<<endl;
    }


    return 0;
}
