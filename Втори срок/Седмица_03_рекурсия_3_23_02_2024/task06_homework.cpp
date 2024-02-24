#include<iostream>
#include<cmath>
using namespace std;
int sum(int n,int k)
{
    if(n!=0)
    {
        return pow(n%10,k)+sum(n/10,k);
    }
}

int numDigits(int n, int counter)
{
    if(n < 10)
    {
        return counter;
    }
    else
    {
        return numDigits(n/10, ++counter);
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    if(n==sum(n,k))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    cout<<" "<<sum(n,k)<<endl;

    cout<<numDigits(123, 1);
    return 0;
}
