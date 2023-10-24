#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    char arr[x][x];
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            if(j <= x - 1)
            {
                cout<<arr[i][j];
            }
            if(i <= x - 1)
            {
                cout<<arr[i][j];
            }

        }
    }


return 0;
}
