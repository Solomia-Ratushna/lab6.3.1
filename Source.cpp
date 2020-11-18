//����������� �����
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)//���������� �������� ������ �� 
                                                                        //��������� ���������� ���������� �����
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)//��������� �������� ������
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
		if (a[i] < 0) //���� �䒺���� �������� ������ �����
			S = S + a[i];

	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ����������� ���������� ���������� �����
	const int n = 21;
	int a[n];
	int Low = -30;
	int High = 40;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;

	return 0;
}