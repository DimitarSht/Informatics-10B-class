#include <iostream>
using namespace std;
int main()
{
     // Декларираме масива
    int val[3] = { 5, 10, 20 };

    // Декларираме указател ptr
    int* ptr;

    // Присвояване на адреса на val[0] към ptr
    // Можем да използваме ptr=&val[0];(еднакви са)
    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
    return 0;
}
