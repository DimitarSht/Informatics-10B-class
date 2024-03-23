#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    fstream my_file("task02.txt", ios::in);

    if (my_file)
    {
        while (!my_file.eof())
        {
            getline(my_file, line);
            cout << "Read from file: " << line << endl;
        }
        my_file.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    my_file.open("task02.txt", ios::app);

    if (my_file)
    {
        my_file << endl;
        my_file << line.size() << endl;
        my_file.close();
    }
    else
    {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }

    return 0;
}
