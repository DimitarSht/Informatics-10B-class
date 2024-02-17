#include<iostream>
using namespace std;
int main()
{
    int M;
    cin>>M;
    char table[M][M];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin>>table[i][j];
        }
    }
    int redove = 0, stalbove = 0;
    int copie = M;
    int razmer = M*M;
    int razmer1 = 0;
    for(int counter = 0; counter < 2*copie - 1; counter++)
    {
        while(redove < M)
        {
            cout<<table[redove][stalbove];
            redove++;
            stalbove++;
            razmer1++;
        }
        if(razmer1 != razmer) break;
        while(stalbove == M - 1)
        {
            cout<<table[redove][stalbove];
            redove++;
            razmer1++;
        }
        if(razmer1 != razmer) break;
        while(redove == M && stalbove > 0)
        {
            cout<<table[redove][stalbove];
            stalbove--;
            razmer1++;
        }
        if(razmer1 != razmer) break;
        while(redove > 0 && stalbove == counter)
        {
            cout<<table[redove][stalbove];
            redove--;
            razmer1++;
        }
        if(razmer1 != razmer) break;
        M -= 1;
    }


        return 0;
    }
