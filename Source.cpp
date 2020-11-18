//Ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)//Формування елементів масиву за 
                                                                        //допомогою генератора випадкових чисел
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)//Виведення елементів масиву
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
		if (a[i] < 0) //сума від’ємних елементів масиву чисел
			S = S + a[i];

	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 21;
	int a[n];
	int Low = -30;
	int High = 40;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;

	return 0;
}