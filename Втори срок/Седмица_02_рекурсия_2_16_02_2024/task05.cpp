#include<iostream>
using namespace std;
/*
Задача 5: Да се реализира рекурсивна
функция, която приема стринг и връща
броя на малките и големите символи в него.
*/
int lowerCount(string str, int idx, int counter)
{
    if(idx == str.length()-1)
    {
        return counter;
    }
    if(str[idx] >= 'a' && str[idx] <= 'z')
    {
        counter++;
    }
    lowerCount(str, idx++, counter);
}
int upperCount(string str, int idx, int counter)
{
    if(idx == str.length()-1)
    {
        return counter;
    }
    if(str[idx] >= 'A' && str[idx] <= 'Z')
    {
        counter++;
    }
    upperCount(str, idx++, counter);
}

int main()
{



    return 0;
}
