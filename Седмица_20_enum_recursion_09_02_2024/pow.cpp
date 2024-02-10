#include<iostream>
using namespace std;
int pow(int n, int x)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return x;
    }
    return x * pow(n-1, x);
}
int main()
{

    cout<<pow(5, 2);

    return 0;
}

