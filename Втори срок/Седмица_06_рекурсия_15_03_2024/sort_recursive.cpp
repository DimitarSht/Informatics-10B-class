#include<iostream>
using namespace std;
void sortRec(int arr[], int sz, int i, int j)
{
    if(i == sz - 1)
    {
        return;
    }
    if(j < sz - i - 1)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
        sortRec(arr,sz,i,++j);
    }
    else
    {
        sortRec(arr,sz,++i,0);
    }
}
int main()
{
    int arr[] = {1,5,3,4,2};
    int sz = 5;
    sortRec(arr, sz, 0, 0);
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
