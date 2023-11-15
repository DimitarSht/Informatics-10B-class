#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

void print(struct Point* p3)
{
    cout<<p3->x<<" "<<p3->y;
}

int main()
{
	struct Point p1 = { 1, 2 };
    /*
	// p2 is a pointer to structure p1
	struct Point* p2 = &p1;

	// Accessing structure members using
	// structure pointer
	cout << p2->x << " " << p2->y;
	*/
    print(&p1);
	return 0;
}
