#include<iostream>
using namespace std;

void input(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

void output(int arr[], int size)
{
    for(int i = 0; i < size; i=i+2)
    {
        cout<<"("<<arr[i]<<","<<arr[i+1]<<")"<<endl;
    }
}

void sorted(int arr[], int size)
{
    int tmp1, tmp2;
    for(int i = 0; i < size - 1; i= i + 2)
    {
        for(int j = 0; j < size - i - 1; j = j + 2)
        {
            if((arr[j]*arr[j] + arr[j+1]*arr[j+1])
                    > (arr[j+2]*arr[j+2] + arr[j+3]*arr[j+3]))
            {
                tmp1 = arr[j];
                tmp2 = arr[j+1];
                arr[j] = arr[j+2];
                arr[j+2] = tmp1;
                arr[j+1] = arr[j+3];
                arr[j+3] = tmp2;
            }
        }
    }
}

int main()
{
    int k;
    cin>>k;
    int length = 2*k;
    int arr[length];
    input(arr, length);
    output(arr, length);
    cout<<endl;
    sorted(arr, length);
    output(arr, length);

    return 0;
}
