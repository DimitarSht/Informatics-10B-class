#include<iostream>
using namespace std;
int main()
{
    int n, buf, b = 0;
    int average = 0, sum = 0;

    cout<<"Enter n:";
    cin >> n;
    //if(n > 2 && n <= 18)
    //{
    int arr[n] = {};
    cout<<"Enter elements of array:";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j=n-1; j > i; j--)
            if(arr[j-1] >arr[j])
            {
                buf=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=buf;
            }
        cout<<arr[i] << " ";
    }

    for(int i = 0 ; i < n; i++)
    {
        if(arr[i] > 0)
        {
            b++;
        }
        if(arr[i] > 0)
        {
            sum = arr[i] + sum;
        }
    }
    cout<<endl;
    cout<<b<<endl;
    average = sum / b;
    cout<<"Average of positive numbers: "<<average;
    //}



    return 0;
}
