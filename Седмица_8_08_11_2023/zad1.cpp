/*
1.	Използвайки двумерен масив, съхранете и обработете данни за множество ученици, включващи информация като име,
номер в клас и оценки по различни предмети.
Направете функции за сортиране на студентите по различни критерии и извеждане на статистика.
*/
#include<iostream>
using namespace std;

double *srednoAritmetichno(int **table, int broiUchenici, int predmeti)
{
    double srednoAritmetichno[broiUchenici];
    double *ptr;
    double tmp_sum = 0.0;
    for(int i = 0; i < broiUchenici; i++)
    {
        for(int j = 0; j < predmeti + 1; j++)
        {
            tmp_sum += table[i][j];
        }
        srednoAritmetichno[i] = tmp_sum / predmeti;
        tmp_sum = 0.0;
    }
    ptr = srednoAritmetichno;
    return ptr;
}

void sortirane(int table, int broiUchenici, int predmeti)
{
    double *ptr = srednoAritmetichno(table, broiUchenici, predmeti);
    for(int i = 0; i < broiUchenici; i++)
    {
        for(int j = 0; j < broiUchenici - i - 1; j++)
        {

        }
    }

}


int main()
{
    int broiUchenici;
    cin>>broiUchenici;
    int predmeti = 10;
    int table[broiUchenici][predmeti+1];
    for(int i = 0; i < broiUchenici; i++)
    {
        for(int j = 0; j < predmeti+1; j++)
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0; i < broiUchenici; i++)
    {
        for(int j = 0; j < predmeti+1; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
