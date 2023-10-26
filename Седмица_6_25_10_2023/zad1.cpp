#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    int* ptr;
    int* tmp;
    cin>>num1>>num2;

    //ptr = &num1;
    tmp = &num2;

    ptr = tmp;
    tmp = &num1;
    //&num1 = tmp;
    //&num2 = ptr;

    cout<< *ptr<<" "<<*tmp;

    return 0;
}
