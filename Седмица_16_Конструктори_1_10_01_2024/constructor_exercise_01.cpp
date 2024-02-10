#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Point
{
private:
    string name;
    int Ox;
    int Oy;

public:
    Point()
    {
        name = "O";
        Ox = 1;
        Oy = 1;
    }
    Point(const string &newName, int newOx, int newOy)
    {
        name = newName;
        Ox = newOx;
        Oy = newOy;
    }
    void setName(const string &newName)
    {
        name = newName;
    }
    string getName()
    {
        return name;
    }
    void setOx(int newOx)
    {
        Ox = newOx;
    }
    int getOx()
    {
        return Ox;
    }
    void setOy(int newOy)
    {
        Oy = newOy;
    }
    int getOy()
    {
        return Oy;
    }

    double distance(const Point &p)
    {
        return sqrt(p.Ox*p.Ox + p.Oy*p.Oy);
    }

    double distanceP(const Point &p)
    {
        return sqrt()
    }
};

int main()
{



    return 0;
}
