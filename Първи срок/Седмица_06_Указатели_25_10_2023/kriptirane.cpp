#include<iostream>
#include<cstring>
using namespace std;

const int MAX_SIZE = 255;

void inputPlain(char *text, int size)
{
    for(int i = 0; text[i] != '\0'; i++)
    {
        cin>>text[i];
    }
}

void cript(char *plain, char *cypher, int k, int size)
{
    /*int number_in_alphabet;
    for(int i = 0; i < size; i++)
    {
        number_in_alphabet = (plain[i] + k) % 26;
        cipher[i] = 'A' + number_in_alphabet;
    }
    */
    for(int i=0; i<size; i++)
    {
        int tempK=k;
        if((plain[i]+k>'Z' && plain[i]<'a') || plain[i]+k>'z')
        {
            while((plain[i]+k>'Z' && plain[i]<'a') || plain[i]+k>'z')
            {
                k-=26;
            }
            cypher[i]=plain[i]+k;
        }
        else
        {
            cypher[i]=plain[i]+k;
        }
        k=tempK;
    }
}

void output(char *plain, char *cipher, int size)
{
    cout<<"Obiknoven text: ";
    for(int i = 0; i < size; i++)
    {
        cout<<plain[i];
    }
    cout<<endl;
    cout<<"Kriptiran text: ";
    for(int i = 0; i < size; i++)
    {
        cout<<cipher[i];
    }
}
int main()
{
    char plain[MAX_SIZE];
    char cipher[MAX_SIZE];
    int k;
    cout<<"Enter key:"<<endl;
    cin>>k;
    cout<<"Enter plain text:"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>plain[i];
    }
    int length = strlen(plain);
    cript(plain, cipher, k, length);

    //inputPlain(plain, MAX_SIZE);

    cout<<"Obiknoven text: ";
    for(int i = 0; i < MAX_SIZE; i++)
    {
        cout<<plain[i];
    }
    cout<<endl;
    cout<<"Kriptiran text: ";
    for(int i = 0; i < MAX_SIZE; i++)
    {
        cout<<cipher[i];
    }

    //output(plain, cipher, length);

    return 0;
}
