#include <iostream>

using namespace std;

#define mass1 //���������, ������� ������ �� ������� � ���������� ��������� ������ � ��������� ����� ��� ��������� �� ��������.

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
	
	cout << "��������� ������ �������:" << endl;

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