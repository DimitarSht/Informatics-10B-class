#include<iostream>
using namespace std;
/*
Задача 5:
Дигитален корен е рекусивна сума на
всички цифри на дадено число.
Дадено е естествено число n.
Пресметнете сумата на цифрите на n.
Ако тази сума е по-голяма от 9, продължете
да намалявате цифрите,
докато не стигнете до число от 0 до 9.
Пример:
16– > 1 + 6 = 7
942− > 9 + 4 + 2 = 15− > 1 + 5 = 6
*/
int digitalRoot(int x, int sum)
{
    if(x==0)
    {
       if(sum <= 9)
        {
            cout<<sum;
        }
        else
        {
            digitalRoot(sum, 0);
        }
    }
    else
    {
        sum+=x%10;
        return digitalRoot(x/10, sum);
    }

}


int main()
{
    int x;
    cin>>x;
    digitalRoot(x, 0);
    return 0;
}
