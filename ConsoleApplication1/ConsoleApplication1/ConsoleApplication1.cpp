#include "pch.h"
#include <conio.h>
#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	//зашиваем размерность массива
	const int size = 10;

	//флаг для выхода из сортировки
	bool flag = false;

	//создание массива
	double mass[size];

	cout << "\nВведите " << size << " элементов массива:\n";

	for (int i = 0; i < size; i++)
	{
		cout << "A [ " << i << " ]= ";
		cin >> mass[i];
	}

	//вывод неотсортированного массива
	cout << "\n\nВведенный массив:\n\n";

	for (int i = 0; i < size; i++)
		//setw - установка расстояния между элементами массива в выводу( и именно для него iomanip )
		cout << setw(4) << mass[i];

	while (!flag)
	{
		flag = true;

		for (int i = 0; i < size - 1; i++)
			//по возрастанию - знак > , по убыванию - знак <
			if (mass[i] > mass[i + 1])
			{
				//выполняем перестановку соседних элементов c помощью функции swap(а то с буфером как-то моветон)
				swap(mass[i], mass[i + 1]);

				flag = false;
			}
	}

	//вывод отсортированного массива
	cout << "\n\nОтсортированный массив:\n\n";

	for (int i = 0; i < size; i++)
		cout << setw(4) << mass[i];

	_getch();
	return 0;
}