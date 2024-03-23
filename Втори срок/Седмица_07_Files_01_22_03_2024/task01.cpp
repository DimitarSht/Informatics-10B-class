#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // отваряме файл за писане
    ifstream my_file("task01.txt");
    // Проверяваме дали безпроблемно се е отворил файлът
    if (!my_file) /// if(!my_file.is_open())
    {
        // Принтираме грешка
        cout << "Error opening the file." << endl;
        // Терминираме main функцията
        return 1;
    }
    // Запазваме съдържанието на файла в string
    string line;
    // Циклим до края на файла
    while (!my_file.eof())  
    {
        // Запазваме съдържанието на файла в line
        getline(my_file, line);
        // принтираме съдържанието
        cout << line << endl;
    }
    my_file.close();

    return 0;
}