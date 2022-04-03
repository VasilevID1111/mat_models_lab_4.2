// Матмодели_лаба_4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


long long factorial(long long n)
{
	long long f = 1;
	for (long long i = 2; i <= n; i++)
		f *= i;
	return f;
}

void main()
{
	long long n = 2;
	long long m = -1;
	long long k;
	double trez = 0, pk = 1, alif = 0, PO, sum, pup;
	double po = 2.6, eps = 0.08;
	//double po = 1.4, trez = 0, pk = 1, eps = 0.03, alif = 0, PO, sum;
	for (n; n < 5; n++) {
		m = -1;
		pk = 1;
		sum = 1;
		trez = po / n;
		double a = 1;
		for (int i = 1; i <= n; i++) {
			a = a * n / i * trez;
			sum += a;
		}

		double pks = 2;
		pup = pow(n, n) / factorial(n) * pow(trez, n + 1) / (1 - trez);
		double alif = pow(n, n) / factorial(n) * pow(trez, n-1);
		while (pk > eps && (abs(pk - pks) > 0.0000001)) {
			pks = pk;
			m++;
			PO = 1 / (sum + pup * (1 - pow(trez, m)));
			alif *= trez;
			pk = alif * PO;
		}
		//cout << "||pk=" << pk << " PO =" << PO << endl;
		if (abs(pk - pks) > 0.0000001) {
			cout << "n=" << n << " m=" << m << endl;
		} else
			cout << "n=" << n << " m=inf" << endl;
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
