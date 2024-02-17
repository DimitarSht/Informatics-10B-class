#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    int height;
public:
    void setAge(int newAge)
    {
        age = newAge;
    }
    void setName(const string &newName)
    {
        name = newName;
    }
    void setHeight(int newHeight)
    {
        height = newHeight;
    }
    int getAge()
    {
        return age;
    }
    void print()
    {
        cout<<name<<" "<<age<<" "<<height;
    }
};

int main()
{
    Person Ivan, Petar;
    Ivan.setName("Ivan");
    Ivan.setHeight(130);
    Ivan.setAge(10);

    int currAge = Ivan.getAge();
    cout<<Ivan.getAge()<<endl;
    Ivan.setAge(currAge+1);

    //double average = (Ivan.getAge() + Petar.getAge()) / 2

    //cout<<Ivan.getName()<<" "<<
    cout<<Ivan.getAge();//<<" "<<
    //    Ivan.getHeight();;
    //Ivan.print();
    return 0;
}
