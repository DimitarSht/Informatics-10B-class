#include<iostream>
using namespace std;

void hanoi(int n, char X, char Y, char Z)
{
    if (n <= 0)
    {
        return;
    }
    hanoi(n - 1, X, Z, Y);
    cout<<"move a disk from "<<X<<" to "<<Z<<endl;
    hanoi(n - 1, Y, X, Z);
}
int main()
{
    int n = 5;
    hanoi(n, 'A', 'B', 'C');
    cout<<"the "<<n<<" disks are successfully moved";
    return 0;
}
