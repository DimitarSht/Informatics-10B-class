#include <iostream>
using namespace std;
int main()
{
    int M, N;
    int D = 0;
    int arr[M] = {};
    int table[M][N];
    cout<<"Enter number for D:"<<endl;
    cin>>D;
    cout<<"Enter number for M and N:"<<endl;
    cin>>M>>N;
    for(int i = 0; i < M; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j == 0)
            {
                table[i][j] = arr[i];
            }
            else
            {
                table[i][j] = table[i][j - 1] + D;
            }
        }
    }
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<table[i][j] <<" ";
        }
        cout<<endl;
    }
return 0;
}



