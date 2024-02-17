#include<iostream>
using namespace std;

int max_GCD(int x, int y, int del)
{
    if(del == 1)
    {
        return del;
    }
    if(x % del == 0 && y % del == 0)
    {
        return del;
    }
    return max_GCD(x,y,del--);
}

int main()
{
    cout<<max_GCD(100,60,60);
    return 0;
}
