#include <iostream>
#include <fstream>
using namespace std;
struct Point
{
    int x, y;
};
int main()
{
    ifstream fin("points.txt");
    ofstream fout("points2.txt");

    if(!fin || !fout)
    {
        cout<<"Error!"<<endl;
        return 1;
    }
//    if(!fout)
//    {
//        cout<<"Error!"<<endl;
//        return 1;
//    }

    Point p;
    while(!fin.eof())
    {
        fin >> p.x >> p.y;
        fout<<p.x<<" "<<p.y<<endl;
    }
    fin.close();
    fout.close();

    return 0;
}














/*
int main()
{
    ifstream fin("points.txt");
    ofstream fout("points2.txt");
    if(!fin)
    {
        cout << "There is an error with the file" << endl;
        return 1;
    }
    Point p;
//    while(fin.read((char*)&p, sizeof(p)))
    while(!fin.eof())
    {
        fin >> p.x >> p.y;
        fout << p.x << " " << p.y << endl;
    }
    fin.close();
    fout.close();
}*/
