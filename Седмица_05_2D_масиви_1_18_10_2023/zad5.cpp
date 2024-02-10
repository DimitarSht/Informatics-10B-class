#include<iostream>
using namespace std;
int main()
{
    int M, N, D;
    cout<<"Enter interval:";
    cin>>D;
    cout<<"Enter M, N:";
    cin>>M>>N;
    int arr[M];
    int table[M][N]; /// аритметична прогресия на всеки ред
    cout<<"Enter one dimension array:";
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
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }




return 0;
}
