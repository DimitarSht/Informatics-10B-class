#include<iostream>
#include<fstream>
using namespace std;

int printRows(const string &filename)
{
    ifstream fin(filename);
    if(!fin)
    {
        cout<<"Error!";
        return -1;
    }
    int result = 0;
    string line;
    while(!fin.eof())
    {
        getline(fin, line);
        result++;
    }
    return result;
}

int main()
{


    return 0;
}
