#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // Отваряме файл за писане
    ofstream my_file("exampleWrite.txt");

    // Проверяваме дали файлът се е отворил безпроблемно
    if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    // Пишем някакъв текст във файла
    my_file << "Line 1" << endl;
    my_file << "Line 2" << endl;
    my_file << "Line 3" << endl;

    // Затваряме файла
    my_file.close();

    return 0;
}