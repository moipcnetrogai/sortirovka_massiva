#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(0, "");
	const unsigned int ARRSIZE = 10;
	int ary[ARRSIZE];
	bool fail = false;
	for (unsigned int i = 0; i < ARRSIZE; i++) {
		do {
			fail = false;
			cout << "Введите значение для элемента массива " << i << ": ";
			cin >> ary[i];
			if (cin.fail()) {
				cout << "*** Введено некорректное значение. Повторите ввод." << endl;
				fail = true;
			}
			cin.clear();
			cin.ignore();
		} while (fail);

	}
	sort(ary, ary + ARRSIZE);
	for (int i = 0; i < ARRSIZE; ++i)
		cout << ary[i] << ' ';

	return 0;
}
