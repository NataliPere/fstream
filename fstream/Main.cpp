#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "windows.h"

void file_insert(std::string path, int pos, std::string str) {
	// ��� 1. �������� ���������� ����� � ������ tmp.
	std::ifstream in;
	in.open(path);

	std::string tmp;
	

	if (in.is_open()) {
	char sym;
	while (in.get(sym))
		tmp += sym;

	}
	in.close();
	//std::cout << tmp; //������������� �����
	// 
	// ��� 2. ��������� ���������� str � ������� tmp.
	tmp.insert(pos, str);

	// ��� 3. �������� ���������� ����� �� ������ tmp.
	std::ofstream out;
	out.open(path);
	if (out.is_open())
	out << tmp;
	out.close();
}


const int tick = 100;
int timer = 0; //����������� ��������� �����

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	std::string path = "file.txt";

	//����� fstream
	/*std::fstream file;
	file.open(path, std::ios::in | std::ios::app); //��������� ���� � ��������� � ����� �� ����������

	if (file.is_open()) {
		std::cout << "���� ������.\n";
		//������ � ����
		file << "By world!\n";
		std::cout << "������ ��������.\n";
		
		file.seekg(0, std::ios::beg); //����������� ������� ��� ���������� � ������ �����
		//���������� �� �����
		std::cout << "���������� �����--> \n";
		char sym;
		while (file.get(sym));
		std::cout << sym;
	}
	else
		std::cout << "������ �������� �����\n";
	
	//seekg - seek get pointer (������ ��� ���������� ������ �� �����)
	//seekp - seek put pointer (����� ������ ��� ���������� ��� ������ � ����)
	//tellg - ����� ��������� �������� ������� ������� ����� (���-�� ����� �� ������ �� ��� �������� ��������������)
	//tellp

	file.close();*/


	//������� "������ � ����"
	/*std::cout << "������� ������: ";
	std::string str;
	getline(std::cin, str);
	std::cout << "������� �������: ";
	std::cin >> n;
	file_insert(path, n, str);*/

	//������ 1. ���� �� �����
	/*std::ifstream in;
	in.open("date.txt");
	if (in.is_open()) {
		int day, month, year;
		std::string tmp;
		getline(in, tmp);

		day = stoi(tmp.substr(0, tmp.find('.'))); //day = stoi(tmp);
		std::cout << "����:  " << day << "\n";

		month = stoi(tmp.substr(tmp.find('.') + 1));
		std::cout << "�����: " << month << "\n";

		year = stoi(tmp.substr(tmp.rfind('.') + 1));
		std::cout << "���:   " << year << "\n";
	}
	else
		std::cout << "������ �������� �����!\n\n";

	in.close();*/
	
	//������ 2. 
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

	//������ 3.

	std::cout << "������� �����: ";
	std::cin >> n;
	system("cls"); //������ ������� �������
	std::cout << "����� = " << n << "\n";


	system("pause"); //������������ ���������� �� ��� ��� ���� �� ������ �� �������




	return 0;
}