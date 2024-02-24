#include<iostream>
using namespace std;

bool rec(int* x, int* y, int lengthX, int lengthY, int i, int j, bool answer)
{
    if(j==lengthX)
    {
        answer=true;
    }
    if(i==lengthY)
    {
        return answer;
    }
    if(x[j]==y[i])
       {
           return rec(x, y, lengthX, lengthY, i+1, j+1, answer);

       }
    if(x[j]!=y[i])
    {
        return rec(x, y, lengthX, lengthY, i+1, 0, answer);
    }
}
int main()
{
    int lengthX;
    cin>>lengthX;
    int* x= new int [lengthX];
    for(int i=0; i<lengthX; i++)
    {
        cin>>x[i];
    }
    int lengthY;
    cin>>lengthY;
    int* y= new int [lengthY];
    for(int i=0; i<lengthY; i++)
    {
        cin>>y[i];
    }
    cout<<rec(x, y, lengthX, lengthY, 0, 0, false);
    return 0;
}
