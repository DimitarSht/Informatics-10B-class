#include<iostream>
using namespace std;
void edn(int n,int a[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int b=i+1; b<n; b++)
        {
            if(a[i]==a[b])
            {
                cout<<a[i]<<" ";
                cout<<i<<" "<<b<<" ";
            }
        }
    }
}

//1 2 3 1 2
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    edn(n,a);
    return 0;
}
