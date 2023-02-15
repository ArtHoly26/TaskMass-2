#include <iostream>

using namespace std;
 // Двумерные массивы
//#define mass1 //Программа, которая вводит по строкам с клавиатуры двумерный массив и вычисляет сумму его элементов по столбцам.
//#define mass2 //Программа, которая вводит по строкам с клавиатуры двумерный массив и вычисляет сумму его элементов по строкам.
//#define mass3 //Программа, которая обрабатывает результаты экзамена. Для каждой оценки программа должна вычислить процент от общего количества оценок.
//#define mass4 //Программа, которая вводит по строкам с клавиатуры двумерный массив и вычисляет среднее арифметическое его элементов.
//#define mass5 //Программа, которая вычисляет определитель квадратной матрицы второго порядка. 
//#define mass6 //Программа, которая определяет номер строки квадратной матрицы, сумма элементов которой максимальна.
// #define mass7 //Программа, которая проверяет, является ли введенная с клавиатуры квадратная матрица "магическим" квадратом.
int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef mass1
	int const rows = 4;
	int const cols = 5;
	int const size = rows;
	int arr[rows][cols];
	int brr[cols]{};

	cout << "Заполните массив числами:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];	
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) brr[j] += arr[i][j];
	}

	cout << "Сумма элементов по столбцам:" << endl;
	for (int i = 0; i < cols; i++) cout << brr[i] << "\t";
#endif mass1

#ifdef mass2
	int const rows = 4;
	int const cols = 5;
	int const size = rows;
	int arr[rows][cols];
	int brr[rows]{};

	cout << "Заполните массив числами:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) brr[i] += arr[i][j];
	}

	cout << "Сумма элементов по строкам:" << endl;
	for (int i = 0; i < rows; i++) cout << brr[i] << "\t";
#endif mass2

#ifdef mass3
	int const size = 4;
	int arr[size];
	int brr[size];
	int a, b, c, d;
	int sum = 0;
	cout << "Введите исходные данные:" << endl;
	cout << "Пятерок=> "; cin >> a;
	arr[0] = a;
	cout << "Четверок=> ";cin >> b;
	arr[1] = b;
	cout << "Троек=> "; cin >> c;
	arr[2] = c;
	cout << "Двоек=> "; cin >> d;
	arr[3] = d;
	cout << "Результаты экзамена" << endl;
	cout << "-----------------------" << endl;

	for (int i = 0; i < size; i++) sum += arr[i];

	for (int i = 0; i < size; i++) brr[i] = (100 * arr[i]) / sum;
	
	cout << "Пятерок   " << a << "   %" << brr[0] << endl;
	cout << "Четверок  " << b << "   %" << brr[1] << endl;
	cout << "Троек     " << c << "   %" << brr[2] << endl;
	cout << "Двоек     " << d << "   %" << brr[3] << endl;
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

	cout << "Среднее арифметическое элементов массива равно: " << avereg << endl;

#endif mass4

#ifdef mass5
	int const rows = 2;
	int const cols = 2;
	int arr[rows][cols];
	double del = 0;

	cout << "Введите матрицу второго порядка:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) cin >> arr[i][j];
	}

	del = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	cout << "Определитель матрицы" << endl;
	for (int i = 0; i < rows; i++)
	{
		{
			for (int j = 0; j < cols; j++) cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Равен  " << del;
#endif mass5

#ifdef mass6
	int const rows = 3;
	int const cols = 3;
	int arr[rows][cols];
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	cout << "Введите матрицу третьего порядка:" << endl;

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

	if (sum1 > sum2 && sum1 > sum3) cout << "Сумма элементов первой строки максимальна" << endl;
	if (sum2 > sum1 && sum2 > sum3) cout << "Сумма элементов второй строки максимальна" << endl;
    if (sum3 > sum1 && sum3 > sum2) cout << "Сумма элементов третей строки максимальна" << endl;

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
	
	cout << "Введите матрицу третьего порядка:" << endl;
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
	if (sum == 120) cout << "Матрица волшебная" << endl;
	else cout << "Матрица не волшебная" << endl;

#endif mass7


}