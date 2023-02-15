#include <iostream>

using namespace std;

#define mass1 //Программа, которая вводит по строкам с клавиатуры двумерный массив и вычисляет сумму его элементов по столбцам.

int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef mass1
	int const rows = 4;
	int const cols = 5;
	int const size = cols;
	int arr[rows][cols];
	int brr[cols];
	int sum = 0;
	
	cout << "Заполните массив числами:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum+= brr[i];
		}
		
	}

	for (int i = 0; i < cols; i++) cout << brr[i];

#endif mass1

}