#include<iostream>
using namespace std;
int main()
{
    int M, N;
    cin>>M>>N;
    int table[M][N];

    for(int i = 0 ;i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0 ;i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            table[i][j] *= 10;
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
