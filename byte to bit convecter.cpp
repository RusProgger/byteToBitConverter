// программа конвертер байт в бит:)
/*
	
	Дата: 04/10/2023
	Время: 15:52
	Страна: Украина
	Автор: Руслан Вороненко
	Все права защищены

*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <windows.h>



// Не используем и не подключаем using namespace std пространства имен для безопасности))

using std::cout;
using std::cin;
using std::endl;

// Cоздаем функцию для ввода данных

void ByteToBit() {

	int n_byte;
	int n_bit = 8;
	cout << "Введите кол-во байт: ";
	cin >> n_byte;

	// 1 байт = 8 бит

	int res = n_byte * n_bit;
	Sleep(1000);
	cout << "Результат: " << res << " бит " << endl;

}

// Главная функция без которой не будет компилироватся проект да и вообще int main функция обязательная:)

int main() {

	setlocale(LC_ALL, "Russian");

	
	ByteToBit();

	system("pause");

	return EXIT_SUCCESS;
}