#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	cout << "Введите команды  1 для сложения или 2 для соединения:  " << endl;
	cin >> i;
	if (i <= 0 or i>2)
	{ cout << "Нет такой команды " << endl; }
	else 
	if (i == 1)
	{int a1, b1, c1; 
		cout << "Введите 1-ое число:  " << endl;
		cin >> a1;
		cout << "Введите 2-ое число:  " << endl;
		cin >> b1;
		c1 = a1 + b1;
		cout << "Сумма двух чисел равна \t" << c1 << endl; }
	else 
	if (i == 2)
	{ string a2, b2, c2;
		cout << "Введите 1-ое слово:  " << endl;
		cin >> a2;
		cout << "Введите 2-ое слово:  " << endl;
		cin >> b2;
		c2 = a2 + " и " + b2;
		cout << "Соединяем эти слова " << c2 << endl; }
	else {
		cout << "Провекра";
	}
}
