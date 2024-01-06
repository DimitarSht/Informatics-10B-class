#include<iostream>
using namespace std;
/*
1.	Нека имаме двумерен масив с размери MxN.
Съставете алгоритъм, чрез който да
сортирате елементите на масива по
сумите на колоните във възходящ ред,
така че на най-първата колона да е
колоната с най-ниска сума на елементите,
а на последната – с най-висока.
Накрая принтирайте сортирания масив.
*/
int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int table[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }
    int sum[cols];
    for(int k = 0; k < cols; k++)
    {
        for(int i = 0; i < cols; i++)
        {
            for(int j = 0; j < rows; j++)
            {
                sum[k] = sum[k] + table[j][i];
            }
        }
    }

    for(int i = 0; i < cols - 1; i++)
    {
        for(int j = 0; j < cols - i - 1; j++)
        {
            if(sum[j] > sum[j+1])
            {
                swap(sum[j], sum[j+1]);
            }
        }
    }




    return 0;
}
