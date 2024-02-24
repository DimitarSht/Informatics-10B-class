#include<iostream>
using namespace std;
/*
Задача 3:
Число е перфектно, ако и само ако е
естествено и равно на сумата на
делителите си без самото число. Напишете
рекурсивна функция, която проверява
дали число е перфектно.
*/
bool isPerfect(int n, int d, int sum)
{
    if(n == sum)
    {
        return 1;
    }
    if(n % d == 0)
    {
        return isPerfect(n, sum+d, d+1);
    }
    else
    {
        return isPerfect(n, sum, d+1);
    }
}
int main()
{
    int x;
    cin>>x;
    cout<<isPerfect(x, 0, 1);

    return 0;
}
