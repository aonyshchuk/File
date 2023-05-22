#include <iostream>
#include<fstream>
#include <string>

using namespace std;
/*
* Завдання 2. Дан текстовий файл. Необхідно переписати 
його рядки в інший файл. Порядок рядків у другому файлі 
має збігатися з порядком рядків у заданому файлі
*/

int main()
{
	setlocale(0, " "); 
	ifstream task2;
	ofstream task22;
	string line; 

	task2.open("task2.txt", ios::in);

	if (!task2.is_open())
	{
		perror("Log: ");
	}
	task22.open("task22.txt", ios::out);
	if (!task22.is_open())
	{
		perror("Error!");
	}
	else
	{
		while (getline(task2, line)) 
		{
			
			task22 << line << endl;
		}
	
		task2.close(); 
		task22.close();
	}
	
	return 0;
}



