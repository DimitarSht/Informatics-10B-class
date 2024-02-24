#include<iostream>
using namespace std;
/*
Задача 1:
Да се напише рекурсивна функция, която
връща сумата на всички делители на цяло
число. Ако числото е отрицателно,
функцията да върне 0.
*/
int sumDeliteli(int n, int sum, int d)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        if(n==d)
        {
            return sum+n;
        }
        if(n % d == 0)
        {
            return sumDeliteli(n, sum+d, d+1);
        }
        else
        {
            return sumDeliteli(n, sum, d+1);
        }
    }

}

int main()
{
    int x;
    cin>>x;
    cout<<sumDeliteli(x,0,1);
    return 0;
}
