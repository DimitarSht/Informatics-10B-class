#include<iostream>
#include<cstring>
using namespace std;
/*
Задача 1:
Напишете програма, която да принтира
информацията за служители на дадена
компания. За целта създайте клас
Employee със следните член-данни:
•	Name – име на служителя - текстов низ
•	yearOfJoining – година на
    присъединяване в компанията - цяло число
•	address – адрес на офиса,
    в който работи служителя – текстов низ
Създайте 3-те вида конструктори
за дадения клас, set и get методи.
След това напишете функция print(),
която да принтира информацията за
даден служител в следния формат:

Name: Robert
Year of joining: 2020
Address: 64C- WallsStreet
Name: Sam
Year of joining: 2010
Address: 68D- WallsStreet
Name: John
Year of joining: 2023
Address: 26B- WallsStreet

Добавете следните методи:
•	compareAddresses(<подходящи_параметри>),
    която сравнява адресите на служителите
•	changeNames(<подходящи_параметри>),
    която сменя фамилията на служител.
*/

class Employee
{
private:
    char* name;
    int yearOfJoining;
    char* address;

public:
    Employee(){}
    Employee(const char* newName, int newYear, const char* newAddress)
    {
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
        yearOfJoining = newYear;
        address = new char[strlen(newAddress) + 1];
        strcpy(address, newAddress);
    }
    Employee(const Employee &other)
    {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        yearOfJoining = other.yearOfJoining;
        address = new char[strlen(other.address) + 1];
        strcpy(address, other.address);
    }
    const char* getName()
    {
        return this->name;
    }
    void setName(const char* newName)
    {
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    int compareAddresses(const Employee &other)
    {
        return strcmp(this->address, other.address);
    }

    void changeNames(const char* newFamilyName)
    {
        char *tmp = new char[strlen(this->name) + 1];
        strcpy(tmp, this->name);
        int i = 0;
        for(; this->name[i] != ' '; i++){}
        for(int p = i; p < strlen(this->name); p++)
        {
            this->name[i] = newFamilyName[i];
        }
    }
    void print()
    {
        cout<<this->name<<" "<<yearOfJoining<<" "<<this->address<<endl;
    }
};

int main()
{
    Employee e1 = Employee("Petar Petrov", 2020, "Sofia");
    Employee e2 = Employee("Zlatko Zlatkov", 2024, "Plovdiv");

    e1.print();
    e1.setName("Ivan Ivanov");
    e1.changeName("Petrov");
    cout<<e1.compareAddresses(e2)<<endl;
    e1.print();
    return 0;
}





/*
class Employee
{
private:
    char* name;
    int yearOfJoining;
    char* address;

public:

     const char* getName()
     {
         return name;
     }

     int getYearOfJoining()
     {
         return yearOfJoining;
     }

     const char* getAddress()
     {
         return address;
     }

     void setName(const char* newName)
     {
        name = new char[strlen(newName) + 1];
        strcpy (name, newName);
     }

     void setYearOfJoining(int newYearOfJoining)
     {
         yearOfJoining = newYearOfJoining;
     }

     void setAddres(const char* newAddress)
     {
        address = new char[strlen(newAddress) + 1];
        strcpy (address, newAddress);
     }

     Employee()
     {

     }

     Employee(const char* newName, int newYearOfJoining, const char* newAddress)
     {
         name = new char[strlen(newName) + 1];
         strcpy (name, newName);
         yearOfJoining = newYearOfJoining;
         address = new char[strlen(newAddress) + 1];
         strcpy (address, newAddress);
     }

     Employee(const Employee &other)
     {
         if(this != &other)
         {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
            yearOfJoining = other.yearOfJoining;
            address = new char[strlen(other.address) + 1];
            strcpy(address, other.address);
         }
     }

     void print()
     {
         cout<<"Name: "<<name<<endl;
         cout<<"Year Of Joining: "<<yearOfJoining<<endl;
         cout<<"Addres: "<<address<<endl;
     }
};
*/
int main()
{

}
