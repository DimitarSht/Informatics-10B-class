#include<iostream>
using namespace std;
/*
Задача 4: Да се напише рекурсивна функция,
която намира сумата на цифрите на дадено
положително число.
*/
int sum (int number)
{
    if (number/10 == 0)
    {
        return number;
    }
    return number%10 + sum(number/10);
}
int main()
{
    int number;
    cin >> number;
    cout << sum(number);

    return 0;
}
