#include<iostream>
#include<cstring>
using namespace std;
int main()
{

	char first_str[] = "b f b";     /// "zfz", "bfb"
	char second_str[] = "g f g";    /// "gfg",

	// Using strcmp()
	int res = strcmp(first_str, second_str);

	if (res==0)
		cout<<"Strings are equal";
	else
		cout<<"Strings are unequal";

	cout<<"\nValue returned by strcmp() is: "<< res;

    return 0;
}
