#include<iostream>
using namespace std;
int main()
{
    int n=0,sum=0,maxnum=0,a=0,b=0,c=0;
    int chi[10001];
    while(sum<10000)
    {
        cin>>n;
        chi[a]=n;
        sum=sum+n;
        a++;
        if(n>maxnum)
        {
            maxnum=n;
        }
    }
    for(int i=0; i<a; i++)
    {
        if(chi[i]<maxnum)
        {
            b++;
        }
        else
        {
            c=b;
        }
    }
    cout<<endl<<maxnum<<endl<<c+1;

    return 0;
}
