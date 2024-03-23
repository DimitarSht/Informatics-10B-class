#include <iostream>
#include <fstream>

using namespace std; 

int main() {

    // отваряме файл за четене
    ifstream my_file("exampleRead.txt");

    // Проверяваме дали се е отворил безпроблемно
    if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    // Запазваме съдържанието на файла в променливата line 
    string line;

    // Цикли до стигане на края на файла
    while (!my_file.eof()) {

        // Запазваме текущия ред от файла в променливата line
        getline(my_file, line);

        // Принтираме съдържанието на файла чрез променливата line
        cout << line << endl;
    }

    // Затваряме файла
    my_file.close();

    return 0;
}