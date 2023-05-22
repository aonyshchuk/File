#include <iostream>
#include<fstream>
#include <string>
using namespace std;
/*
* Завдання 4. Дан текстовий файл. Додати в нього рядок 
із дванадцяти рисок (------------), помістивши його після 
останнього з рядків, у яких немає пробілу. Якщо таких 
рядків немає, то новий рядок має бути доданий після всіх 
рядків наявного файлу. Результат записати в інший файл
*/

int main() {
   fstream task4("task4.txt"); // Відкриваємо вхідний файл для читання
   fstream task41("task41.txt"); // Відкриваємо вихідний файл для запису
    string line;
    string Line2;
    bool foundLineWithoutSpace = false;

    if (!task4.is_open()) {
        cout << "Error!" << endl;
    }

    if (!task41.is_open()) {
        cout << "Error!" << endl;
    }


    while (std::getline(task4, line)) {
        if (line.find(' ') == string::npos) {
            Line2 = line;
            foundLineWithoutSpace = true;
        }
        task41 << line << endl;
    }

    if (foundLineWithoutSpace) {
        task41 << "------------" << endl;
    }
    else {
        task41 << endl << "------------" << endl;
    }

    task4.close();
    task41.close();

    cout << "Операція завершена успішно." << endl;

    return 0;
}