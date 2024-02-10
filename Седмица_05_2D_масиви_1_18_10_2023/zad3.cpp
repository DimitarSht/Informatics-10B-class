#include<iostream>
using namespace std;
int main()
{
    int M, N;
    cin>>M>>N;
    int arr[M];
    for(int i = 0; i < M; i++)
    {
        cin>>arr[i];
    }
    int table[M][N];
    for(int i = 0 ;i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            table[i][j] = arr[j];   /// по редове
            ///table[i][j] = arr[i];   /// по стълбове
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
