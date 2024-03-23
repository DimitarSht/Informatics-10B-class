#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 1. Пишем информация в текстовия файл
    fstream my_file("exampleCombined.txt", ios::out);

    if (my_file) {
        my_file << "This is a test line." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // 2. Четем информация от текстовия файл
    string line;
    my_file.open("exampleCombined.txt", ios::in);
    
    if (my_file) {
        while (!my_file.eof()) {
            getline(my_file, line);
            cout << "Read from file: " << line << endl;
        }
        my_file.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    // 3. Дописваме информация в края на текствия файл
    my_file.open("exampleCombined.txt", ios::app);

    if (my_file) {
        my_file << "This is another test line, appended to the file." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }

    return 0;
}