#include <iostream>
#include<fstream>
#include <string>
#include <vector>
using namespace std;
/*
Завдання 3. Дан текстовий файл. Необхідно переписати 
його рядки в інший файл. Порядок рядків у другому файлі 
має бути зворотним по відношенню до порядку рядків у 
заданому файлі
*/

int main()
{
	setlocale(0, " ");
	ifstream task2;
	ofstream task3;
	string line;
	vector<string>lines; 
	task2.open("task2.txt", ios::in);

	if (!task2.is_open())
	{
		perror("Log: ");
	}
	task3.open("task3.txt", ios::out);
	if (!task3.is_open())
	{
		perror("Error!");
	}
	
		while (getline(task2, line))
		{

			lines.push_back(line); 
		}
		reverse(lines.begin(), lines.end()); 
		for (const auto& reversedLine : lines) {
		task3 << reversedLine << endl;
		}

		task2.close();
		task3.close();


	return 0;
}