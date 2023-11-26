#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cin>>razmer;
    int *masiv = new int[razmer];      // динамично декларираме масива
    cout<<"Vavedi masiv:"<<endl;
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }
    for(int i = 0; i < razmer; i++)
    {
        cout<<masiv[i]<<" ";
    }
    delete[] masiv;  // освобождаваме паметта!!!
    return 0;
}
