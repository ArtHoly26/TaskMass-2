#include <iostream>

using namespace std;
 // ��������� �������
//#define mass1 //���������, ������� ������ �� ������� � ���������� ��������� ������ � ��������� ����� ��� ��������� �� ��������.
//#define mass2 //���������, ������� ������ �� ������� � ���������� ��������� ������ � ��������� ����� ��� ��������� �� �������.
//#define mass3 //���������, ������� ������������ ���������� ��������. ��� ������ ������ ��������� ������ ��������� ������� �� ������ ���������� ������.
//#define mass4 //���������, ������� ������ �� ������� � ���������� ��������� ������ � ��������� ������� �������������� ��� ���������.
//#define mass5 //���������, ������� ��������� ������������ ���������� ������� ������� �������. 
//#define mass6 //���������, ������� ���������� ����� ������ ���������� �������, ����� ��������� ������� �����������.
// #define mass7 //���������, ������� ���������, �������� �� ��������� � ���������� ���������� ������� "����������" ���������.
int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef mass1
	int const rows = 4;
	int const cols = 5;
	int const size = rows;
	int arr[rows][cols];
	int brr[cols]{};

	cout << "��������� ������ �������:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];	
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) brr[j] += arr[i][j];
	}

	cout << "����� ��������� �� ��������:" << endl;
	for (int i = 0; i < cols; i++) cout << brr[i] << "\t";
#endif mass1

#ifdef mass2
	int const rows = 4;
	int const cols = 5;
	int const size = rows;
	int arr[rows][cols];
	int brr[rows]{};

	cout << "��������� ������ �������:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) brr[i] += arr[i][j];
	}

	cout << "����� ��������� �� �������:" << endl;
	for (int i = 0; i < rows; i++) cout << brr[i] << "\t";
#endif mass2

#ifdef mass3
	int const size = 4;
	int arr[size];
	int brr[size];
	int a, b, c, d;
	int sum = 0;
	cout << "������� �������� ������:" << endl;
	cout << "�������=> "; cin >> a;
	arr[0] = a;
	cout << "��������=> ";cin >> b;
	arr[1] = b;
	cout << "�����=> "; cin >> c;
	arr[2] = c;
	cout << "�����=> "; cin >> d;
	arr[3] = d;
	cout << "���������� ��������" << endl;
	cout << "-----------------------" << endl;

	for (int i = 0; i < size; i++) sum += arr[i];

	for (int i = 0; i < size; i++) brr[i] = (100 * arr[i]) / sum;
	
	cout << "�������   " << a << "   %" << brr[0] << endl;
	cout << "��������  " << b << "   %" << brr[1] << endl;
	cout << "�����     " << c << "   %" << brr[2] << endl;
	cout << "�����     " << d << "   %" << brr[3] << endl;
	cout << "-----------------------" << endl;
	
#endif mass3

#ifdef mass4
	int const rows = 5;
	int const cols = 6;
	int arr[rows][cols];
	double sum = 0;
	double avereg;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) sum += arr[i][j];
	}
	avereg = sum / (rows * cols);

	cout << "������� �������������� ��������� ������� �����: " << avereg << endl;

#endif mass4

#ifdef mass5
	int const rows = 2;
	int const cols = 2;
	int arr[rows][cols];
	double del = 0;

	cout << "������� ������� ������� �������:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	del = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	cout << "������������ �������" << endl;
	for (int i = 0; i < rows; i++)
	{
		{
			for (int j = 0; j < cols; j++) cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "�����  " << del;
#endif mass5

#ifdef mass6
	int const rows = 3;
	int const cols = 3;
	int arr[rows][cols];
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	cout << "������� ������� �������� �������:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == 0) sum1 += arr[i][j];
			if (i == 1) sum2 += arr[i][j];
			if (i == 2) sum3 += arr[i][j];
		}
	}

	if (sum1 > sum2 && sum1 > sum3) cout << "����� ��������� ������ ������ �����������" << endl;
	if (sum2 > sum1 && sum2 > sum3) cout << "����� ��������� ������ ������ �����������" << endl;
    if (sum3 > sum1 && sum3 > sum2) cout << "����� ��������� ������ ������ �����������" << endl;

#endif mass6
	
#ifdef mass7
	int const rows = 3;
	int const cols = 3;
	int arr[rows][cols];
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	int sum6 = 0;
	int sum7 = 0;
	int sum8 = 0;
	int sum = 0;
	
	cout << "������� ������� �������� �������:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == 0)sum1 += arr[i][j];
			if (i == 1)sum2 += arr[i][j];
			if (i == 2)sum3 += arr[i][j];
		}
		for (int j = 0; j < cols; j++)
		{
			if (j == 0)sum4 += arr[i][j];
			if (j == 1)sum5 += arr[i][j];
			if (j == 2)sum6 += arr[i][j];
		}
		for (int j = 0; j < cols; j++)
		{
			if (j == i) sum7 += arr[i][j];
		}
		for (int j = 0; j < cols; j++)
		{
			if (j + i == 2) sum8 += arr[i][j];
		}
	}

	sum = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8;
	if (sum == 120) cout << "������� ���������" << endl;
	else cout << "������� �� ���������" << endl;

#endif mass7


}