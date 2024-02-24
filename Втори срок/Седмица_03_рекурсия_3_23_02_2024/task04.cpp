#include<iostream>
using namespace std;
/*
Задача 4:
Напишете рекурсивна функция, която
проверява дали цифрите на дадено
положително число са подредени
в нарастващ ред.
*/
bool isSorted(int n, bool result, int MAX)
{
    if(n == 0)
    {
        return result;
    }
    if(n%10 < MAX)
    {
        MAX = n%10;
        result = true;
        return isSorted(n/10, result, MAX);
    }
    else
    {
        result = false;
        return isSorted(n/10, result, MAX);
    }
}
int main()
{
    cout<<isSorted(123, false, 3);
    return 0;
}
