#include<iostream>
using namespace std;
/*
Задача 7: Да се реализира рекурсивна функция,
която приема стринг и връща дали стрингът
е палиндром.
*/
bool isPalindrome(string str, int i)
{
    if(str[i]!=str[str.length()-i-1])
    {
        return false;
    }
    if(i==str.length()-i-1 || i==str.length()-i)
    {
        return true;
    }
    i++;
    return isPalindrome(str, i);
}

int main()
{
    string str = "abccba";
    cout<<isPalindrome(str, 0);


    return 0;
}
