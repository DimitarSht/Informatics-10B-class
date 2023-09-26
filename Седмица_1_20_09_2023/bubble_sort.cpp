#include<iostream> // for Code Blocks
using namespace std;
int main()
{
   int i,n=10,a[n],j,buf;
   for(i=0;i< n;i++)
       cin >>a[i];
   for(i=0; i< n;i++)
   for(j=n-1;j >i;j--)
      if(a[j-1] >a[j])
       {
          buf=a[j-1];
          a[j-1]=a[j];
          a[j]=buf;
       }
 for(i=0;i< n;i++)
    cout<< a[i]<< "\n";
 return 0;
 }
