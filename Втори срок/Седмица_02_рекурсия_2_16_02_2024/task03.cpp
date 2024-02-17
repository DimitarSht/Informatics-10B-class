#include<iostream>
using namespace std;

double minElement(double *arr, int startIndex, int sz) {

    if (startIndex == sz - 1)
        return arr[startIndex];


    double minInRest = minElement(arr, startIndex + 1, sz);

    if (arr[startIndex] < minInRest)
        return arr[startIndex];
    else
        return minInRest;
}
int main()
{
    double arr[] = {1.01, 2.3, 5.3, 0.11, 5.1};
    cout<<minElement(arr, 0, 5);
    return 0;
}
