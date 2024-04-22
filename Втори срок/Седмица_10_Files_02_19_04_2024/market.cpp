#include<iostream>
#include<fstream>
using namespace std;
struct Product
{
    string Name;
    int quantity;
    double price;
};

struct ProductArray
{
    Product *arr;
    int currentSize;
    int maxSize;
};

int main()
{
    int N, M;
    cin>>N;
    ProductArray Arr = {new Product[N], 0, N};

    fstream file("inventory.txt", ios::in);

    if(!file)
    {
        cout<<"Error!";
        return 1;
    }





    return 0;
}
