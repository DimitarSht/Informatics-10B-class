#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    // Create an array of structures
    struct Point arr[10];

    // Access array members
    for(int i = 0; i < 10; i++)
    {
        cout<<"Element "<<i + 1<<":"<<endl;
        cin>>arr[i].x;
        cin>>arr[i].y;
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<"X of element "<<i + 1<<" is: "<<arr[i].x<<endl;
        cout<<"Y of element "<<i + 1<<" is: "<<arr[i].y<<endl;
    }
    //cout << arr[0].x << " " << arr[0].y;
    return 0;
}
