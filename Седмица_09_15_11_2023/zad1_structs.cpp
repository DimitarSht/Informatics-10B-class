#include<iostream>
#include<string>
using namespace std;
struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    struct Person Chovek1;
    cin>>Chovek1.name>>Chovek1.age>>Chovek1.address;
    cout<<Chovek1.name<<" "<<
        Chovek1.age<<" "<<Chovek1.address;

    return 0;
}
