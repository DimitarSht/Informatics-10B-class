#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **table = new int*[n];      // заделяме памет за редове!!!
    for(int i = 0; i < n; i++)
    {
        table[i] = new int[n];      // заделяме памет за стълбове!!!
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];      // въвеждаме масива
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j];    // извеждаме масива
        }
    }
    for(int i = 0; i < n; i++)
    {
        delete[] table[i];      // освобождаваме паметта за колоните!!!
    }
    delete[] table;             // освобождаваме паметта за редовете!!!

    return 0;
}
