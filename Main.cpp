#include <iostream>
#include<fstream>
#include <string>
using namespace std;
/*
* �������� 4. ��� ��������� ����. ������ � ����� ����� 
�� ���������� ����� (------------), ��������� ���� ���� 
���������� � �����, � ���� ���� ������. ���� ����� 
����� ����, �� ����� ����� �� ���� ������� ���� ��� 
����� �������� �����. ��������� �������� � ����� ����
*/

int main() {
   fstream task4("task4.txt"); // ³�������� ������� ���� ��� �������
   fstream task41("task41.txt"); // ³�������� �������� ���� ��� ������
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

    cout << "�������� ��������� ������." << endl;

    return 0;
}