#include<iostream>
using namespace std;

void prostoLiE(int x)
{
    bool prosto = true;
    for(int i = 2; i*i <= x; i++)
    {
        if(x % i == 0)
        {
            prosto = false;
        }
        else
        {
            prosto = true;
        }
    }

    cout<<prosto;
}

int main()
{
    int n;
    cin>>n;

    /*if(prostoLiE(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }*/
    //cout<<prostoLiE(n);
    prostoLiE(n);
return 0;
}




