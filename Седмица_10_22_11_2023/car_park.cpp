#include<iostream>
#include<string>
using namespace std;
const int MAX_SIZE = 10;
struct Car
{
    string brand;
    string model;
    string color;
    int year;
};

void addCar(Car *garage, Car newCar, int position, int &sz)
{
    garage[position].brand = newCar.brand;
    garage[position].model = newCar.model;
    garage[position].color = newCar.color;
    garage[position].year = newCar.year;
    sz++;
}

void removeCar(Car *garage, int position, int &sz)
{
    garage[position].brand = garage[position++].brand;
    garage[position].model = garage[position++].model;
    garage[position].color = garage[position++].color;
    garage[position].year = garage[position++].year;
    sz--;
}

void printCar(Car *garage, int position, int &sz)
{
    if(sz == 0)
    {
        cout<<"No cars in the garage!";
    }
    else
    {
        cout<<garage[position].brand<<endl;
        cout<<garage[position].model<<endl;
        cout<<garage[position].color<<endl;
        cout<<garage[position].year<<endl;
    }

}

int main()
{
    int position, sz = 0;
    struct Car *garage = new Car[MAX_SIZE];

    // int sz = sizeof(garage) / sizeof(garage[0]);

    cout<<"Enter information for car 1: "<<endl;
    struct Car car1;
    getline(cin, car1.brand);
    getline(cin, car1.model);
    getline(cin, car1.color);
    cin>>car1.year;

    cin.ignore();

    cout<<"Enter information for car 2: "<<endl;
    struct Car car2;
    getline(cin, car2.brand);
    getline(cin, car2.model);
    getline(cin, car2.color);
    cin>>car2.year;


    // Add car to garage
    cout<<"Enter where you want to add your car:"<<endl;
    cin>>position;
    addCar(garage, car1, position, sz);

    // Add car to garage
    cout<<"Enter where you want to add your car:"<<endl;
    cin>>position;
    addCar(garage, car2, position, sz);

    // remove car from garage
    cout<<"Enter which car you want to remove:"<<endl;
    cin>>position;
    removeCar(garage, position, sz);

    // Print information about car
    cout<<"Enter car for which car you want information:"<<endl;
    cin>>position;
    printCar(garage, position, sz);

    delete[] garage;

    return 0;
}
