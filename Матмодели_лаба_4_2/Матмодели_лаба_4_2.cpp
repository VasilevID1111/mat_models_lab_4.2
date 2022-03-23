﻿// Матмодели_лаба_4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


int factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

void main()
{
	int n = 2;
	int m = 0;
	int k;
	double po = 2.6, trez = 0, pk = 1, eps = 0.08, alif = 0, PO, sum;
	for (n; n < 10; n++) {
		m = 0;
		pk = 1;
		sum = 0;
		trez = po / n;
		for (int i = 0; i <= n; i++) {
			double a, b, c;
			a = pow(n, i);
			b = factorial(i);
			c = pow(trez, i);
			sum += (a / b * c);
		}

		
		while (pk > eps) {
			m++;
			k = n + m;
			double pup = pow(n, n) / factorial(n) * pow(trez, n + 1) * (1 - pow(trez, m)) / (1 - trez);
			PO = 1 / (sum + pup);
			alif = pow(n, n) / factorial(n) * pow(trez,k);
			pk = alif * PO;
		}
		cout << "n=" << n << " m=" << m << endl;
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
