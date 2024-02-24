#include<iostream>
using namespace std;
/*
Задача 2:
Число е просто, ако и само ако е
естествено, по-голямо от 1 и
единствените му
делители са 1 и то самото. Напишете
рекурсивна функция, която проверява
дали число е просто.
*/
bool prime(int n, int d, bool status)
{
    if(n < 0)
    {
        return 0;
    }
    if(d == n)
    {
        return status;
    }
    if(n % d == 0)
    {
        status = false;
        return prime(n, d+1, status);
    }
    else
    {
        return prime(n, d+1, status);
    }
}

int main()
{
    int x;
    cin>>x;
    cout<<prime(x,2,true);

    return 0;
}
