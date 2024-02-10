#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
    string name;
    int height;
    int age;
    string colorEyes;

    public:
    Person()
    {
        /// опционално
        name = "Ivan";
        height = 100;
        age = 10;
        colorEyes = "Brown";
    }
    Person(const string &newName, int newAge, int newHeight, const string &newColorEyes)
    {
        name = newName;
        age = newAge;
        height = newHeight;
        colorEyes = newColorEyes;
    }
    Person(const Person &other)
    {
        if(this != &other)
        {
            this->name = other.name;
            this->height = other.height;
            this->age = other.age;
            this->colorEyes = other.colorEyes;
        }
    }
    ~Person(){}



    void setName(const string &newName)
    {
        this->name = newName;
    }
    string getName()
    {
        return this->name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    int getHeight()
    {
        return this->height;
    }
    void setColorEyes(const string &newColor)
    {
        this->colorEyes = newColor;
    }
    string getColorEyes()
    {
        return this->colorEyes;
    }

    void print()
    {
        cout<<name<<" "<<height<<" "<<
            age<<" "<<colorEyes<<endl;
    }

};
int main()
{
    /*Person Ivan;
    string name = "Ivan";
    Ivan.setName(name);
    //cout<<Ivan.getName()<<" ";

    /// int age = 10;
    Ivan.setAge(10);
    //cout<<Ivan.getAge();
    Ivan.setHeight(120);
    Ivan.setColorEyes("brown");

    //Ivan.print();
*/
    Person Ivan = Person();
    Person Petar("Petar", 15, 160, "Green");
    Person Gosho(Petar);
    Gosho.setName("Gosho");

    Ivan.print();
    Petar.print();
    Gosho.print();

    return 0;
}

