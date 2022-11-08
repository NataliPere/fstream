#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "windows.h"

void file_insert(std::string path, int pos, std::string str) {
	// Шаг 1. Копируем содержимое файла в строку tmp.
	std::ifstream in;
	in.open(path);

	std::string tmp;
	

	if (in.is_open()) {
	char sym;
	while (in.get(sym))
		tmp += sym;

	}
	in.close();
	//std::cout << tmp; //промежуточный вывод
	// 
	// Шаг 2. Вставляем содержимое str в строкую tmp.
	tmp.insert(pos, str);

	// Шаг 3. Заменяем содержимое файла на строку tmp.
	std::ofstream out;
	out.open(path);
	if (out.is_open())
	out << tmp;
	out.close();
}


const int tick = 100;
int timer = 0; //отслеживает прошедшее время

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	std::string path = "file.txt";

	//Класс fstream
	/*std::fstream file;
	file.open(path, std::ios::in | std::ios::app); //открываем файл и считываем в конец всё содержимое

	if (file.is_open()) {
		std::cout << "Файл открыт.\n";
		//Запись в файл
		file << "By world!\n";
		std::cout << "Данные записаны.\n";
		
		file.seekg(0, std::ios::beg); //перемещение курсора для считывания в начало файла
		//Считывание из файла
		std::cout << "Содержимое файла--> \n";
		char sym;
		while (file.get(sym));
		std::cout << sym;
	}
	else
		std::cout << "Ошибка открытия файла\n";
	
	//seekg - seek get pointer (курсор для считывания данных из файла)
	//seekp - seek put pointer (найти курсор для считывания для записи в файл)
	//tellg - метод позволяет получить позицию курсора файла (кол-во шагов от начала до его текущего местоположения)
	//tellp

	file.close();*/


	//Задание "запись в файл"
	/*std::cout << "Введите строку: ";
	std::string str;
	getline(std::cin, str);
	std::cout << "Введите позицию: ";
	std::cin >> n;
	file_insert(path, n, str);*/

	//Задача 1. Дата из файла
	/*std::ifstream in;
	in.open("date.txt");
	if (in.is_open()) {
		int day, month, year;
		std::string tmp;
		getline(in, tmp);

		day = stoi(tmp.substr(0, tmp.find('.'))); //day = stoi(tmp);
		std::cout << "День:  " << day << "\n";

		month = stoi(tmp.substr(tmp.find('.') + 1));
		std::cout << "Месяц: " << month << "\n";

		year = stoi(tmp.substr(tmp.rfind('.') + 1));
		std::cout << "Год:   " << year << "\n";
	}
	else
		std::cout << "Ошибка открытия файла!\n\n";

	in.close();*/
	
	//Задача 2. 
	/*char key;
	//std::cin >> key;
	while (true) {
		if (_kbhit()) { //keyboard hit
			key = _getch();

			switch (key) {
			case 'A': case 'a':
				std::cout << "LEFT\n";
				break;
			case 'D': case 'd':
				std::cout << "RIGHT\n";
				break;
			}
		}
		std::cout << ".\n";
		Sleep(tick);
		timer += tick;
		if (timer >= 1000) {
			std::cout << ".\n";
				timer = 0;
		}
	}*/

	//Задача 3.

	std::cout << "Введите число: ";
	std::cin >> n;
	system("cls"); //полная очистка консоли
	std::cout << "Число = " << n << "\n";


	system("pause"); //приостановка приложения до тех пор пока не нажать на клавишу




	return 0;
}