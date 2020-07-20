/*
Лабораторная работа по курсу
Язык программирования С
Тема : Указатели
Задание
1. 	Даны два массива, упорядоченных по возрастанию : А[n] и B[m].Сформируйте массив C[n + m], состоящий из элементов массивов А и В, упорядоченный по возрастанию(Массив С не должен сортироваться).
#include <iostream>
using namespace std;
int main()
{
	const int n = 5, m = 7;
	double A[n] = { 1.1, 3.4, 4.5, 5.0, 7.1 };
	double B[m] = { 1.0, 2.0, 2.0, 3.2, 9.4, 12.1, 23.0 };
	double C[n + m];
	int k = 0, i = 0, j = 0;
	while (i < n && j < m)
	{
		if (*(A + i) < *(B + j)) { *(C + k++) = *(A + i); i++; }
		else { *(C + k++) = *(B + j); j++; }
	}
	while (i < n)
	{
		*(C + k++) = *(A + i); i++;
	}
	while (j < m)
	{
		*(C + k++) = *(B + j); j++;
	}
	for (int i = 0; i < n + m; i++)
		cout << *(C + i) << "  ";
	cout << "\n";
	system("pause");
	return 0;
}
*/
/*
2. 	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать общие элементы двух массивов.
#include <iostream>
#include <Windows.h>
using namespace std;
void Set(int* a, int size)
{
	for (int i = 0; i < size; a++, i++)
		*a = rand() % 20 + 1;
}
void Print(int* a, int size)
{
	for (int i = 0; i < size; a++, i++)
		cout << *a << " ";
	cout << "\n";
}
void Printt(int* a, int size)
{
	cout << "\n";
	for (int i = 0; i < size; a++, i++)
		if (*a > 0) cout << *a << " ";
	cout << "\n";
}
void main()
{
	SetConsoleOutputCP(1251);
	void Set(int* a, int size);
	void Print(int* a, int size);
	void Printt(int* a, int size);
	int digit;
	const int size_A = 10;
	int A[size_A];
	int* ptrA;
	ptrA = &A[0];
	const int size_B = 10;
	int B[size_B];
	int* ptrB;
	ptrB = &B[0];
	const int size_C = size_A + size_B;
	int C[size_C];
	int* ptrC;
	ptrC = &C[0];
	int tmp = 0;
	do
	{
		Set(A, size_A);
		Print(A, size_A);
		Set(B, size_B);
		Print(B, size_B);
		cout << "Эта программа создаёт третий массив, в котором собирает:\n";
		cout << "1 - Общие элементы двух массивов;\n";
		cout << "2 - Элементы массива A, которые не включаются в B;\n";
		cout << "3 - Элементы массива B, которые не включаются в A;\n";
		cout << "4 - Элементы массивов A и B, коотрые не являются общими для них(то есть объединение результатов двух предыдущих вариантов)\n";
		cin >> digit;
		switch (digit) {
		case 1:
			ptrC = C;
			for (ptrA = A; ptrA < A + size_A; ptrA++) {
				for (ptrB = B; ptrB < B + size_B; ptrB++) {
					if (*ptrA == *ptrB) {
						*ptrC = *ptrA;
						ptrC++;
					}
				}
			}
			cout << "Результат:\n";
			Printt(C, size_C);
			break;
		case 2:
			ptrC = C;
			tmp = 0;
			for (ptrA = A; ptrA < A + size_A; ptrA++) {
				for (ptrB = B; ptrB < B + size_B; ptrB++) {
					if (*ptrA == *ptrB)
						tmp++;
				}
				if (tmp == 0) {
					*ptrC = *ptrA;
					ptrC++;
				}
				tmp = 0;
			}
			cout << "Результат:\n";
			Printt(C, size_C);
			break;
		case 3:
			ptrC = C;
			tmp = 0;
			for (ptrB = B; ptrB < B + size_B; ptrB++) {
				for (ptrA = A; ptrA < A + size_A; ptrA++) {
					if (*ptrB == *ptrA)
						tmp++;
				}
				if (tmp == 0) {
					*ptrC = *ptrB;
					ptrC++;
				}
				tmp = 0;
			}
			cout << "Результат:\n";
			Printt(C, size_C);
			break;
		case 4:
			ptrC = C;
			tmp = 0;
			for (ptrA = A; ptrA < A + size_A; ptrA++) {
				for (ptrB = B; ptrB < B + size_B; ptrB++) {
					if (*ptrA == *ptrB)
						tmp++;
				}
				if (tmp == 0) {
					*ptrC = *ptrA;
					ptrC++;
				}
				tmp = 0;
			}
			for (ptrB = B; ptrB < B + size_B; ptrB++) {
				for (ptrA = A; ptrA < A + size_A; ptrA++) {
					if (*ptrB == *ptrA)
						tmp++;
				}
				if (tmp == 0) {
					*ptrC = *ptrB;
					ptrC++;
				}
				tmp = 0;
			}
			cout << "Результат:\n";
			Printt(C, size_C);
			break;
		}
		cout << "\nЕсли хотите продолжить, нажмите 1:";
		cin >> digit;
	} while (digit == 1);
}

3. 	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать элементы массива A, которые не включаются в B.

4. 	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать элементы массива B, которые не включаются в A.

5. 	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать элементы массивов A и B, которые не являются общими для них.
*/


