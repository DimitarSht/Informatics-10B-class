#include<iostream>
using namespace std;
int main()
{
    int x, y;

    cin>>x>>y;
    char arr[x][y];

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if('A' <= arr[i][j] && arr[i][j] <= 'Z')
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
