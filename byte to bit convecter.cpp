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


using std::cout;
using std::cin;
using std::endl;



void ByteToBit() {

	int n_byte;
	int n_bit = 8;
	cout << "Введите кол-во байт: ";
	cin >> n_byte;

	// 1 байт = 8 бит

	// тут переменная n_byte * n_bit;

	int res = n_byte * n_bit;
	Sleep(800);
	cout << "Результат: " << res << " бит " << endl;

}


int main() {

	// локализация 
	setlocale(LC_ALL, "Russian");

	// вызов функции 
	ByteToBit();

	// system("pause");

	std::cin.get();

	// return EXIT_SUCCESS;
	return 0;
}



