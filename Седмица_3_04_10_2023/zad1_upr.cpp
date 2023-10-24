#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, product = 1;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0) product*=arr[i];
        else if (arr[i] > 0) sum+=arr[i];
    }
    cout<<sum<<" "<<product;

    return 0;
}
