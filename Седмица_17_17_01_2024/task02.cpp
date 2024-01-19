#include<iostream>
using namespace std;
/*
Задача 2:
Реализирайте клас NumbersSummator,
който поддържа сума на цели числа.
Създайте 3-те вида конструктори за
дадения клас. Също така, за класа
реализирайте следните методи:
•	sum, който връща текущата стойност
на сумата.
•	add, увеличаващ сумата с дадено число.
•	sub, намаляващ сумата с дадено число.
•	num, връща колко пъти сумата е била
променяна.
•	average, връщащ средното аритметично
на всички числа, с които сумата е била
променяна.
*/
class NumberSummator
{
private:
    int sum;
    int changes;
    int sumOfChanges;
public:
    NumberSummator()
    {
        sum=0;
        changes=0;
        sumOfChanges=0;
    }
    NumberSummator(int newsum, int newchanges, int newsumOfChanges)
    {
        sum=newsum;
        changes=newchanges;
        sumOfChanges=newsumOfChanges;
    }
    NumberSummator(const NumberSummator &other)
    {
        if(this != &other)
        {
            this->sum = other.sum;
            this->changes = other.changes;
            this->sumOfChanges = other.sumOfChanges;
        }
    }
    int sum()
    {
        return this->sum;
    }
    void add(int newNumber)
    {
        sum = sum + newNumber;
        changes += 1;
        sumOfChanges += newNumber;
    }
    void sub(int newNumber)
    {
        sum = sum - newNumber;
        changes += 1;
        sumOfChanges += newNumber;
    }
    int num()
    {
        return changes;
    }
    double average()
    {
        return sumOfChanges / (double)changes;
    }
};
int main()
{


    return 0;
}
