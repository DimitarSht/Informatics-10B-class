#include<iostream>
using namespace std;
/*
Задача 5: Да се реализира рекурсивна функция,
която приема произволен масив и число и
връща дали числото се съдържа в масива. (Линейно търсене).
*/
bool linSearch(int *arr, int sz, int num, bool searched)
{
    if(sz == 0)
    {
        return searched;
    }
    if(num == arr[sz - 1])
    {
        searched = true;
        return searched;
    }
    linSearch(arr, sz-1, num, searched);
}

int main()
{


    return 0;
}
