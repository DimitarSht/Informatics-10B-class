#include<iostream>
//#include<cmath>
using namespace std;

int power(int num, int pow)
{
    int num2 = num;
    for(int i = 0; i < pow;i++)
    {
        num *= num2;
    }
    return num;
}

int main()
{
    int M, N, Q;
    cout<<"Enter interval:";
    cin>>Q;
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
                //cout<<"Interval "<<power(Q,i)<<" ";
                table[i][j] = table[i][j-1]*Q; /// Q винаги е на степен 1
                ///table[i][j] = table[j][0]*power(Q,i);
                //cout<<endl;
            }
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
