#include<cmath>
#include <iostream>
#include<iomanip>

using namespace std;

double f(double x)
{
	return pow(3-2*x*x,1/3.);
}

double Integrate(double a, double b, int n)
{
	double h, p1 = 0, p2 = 0;
	h = (b - a) / n;

	for (int k = 1; k <= n / 2; k++)
	{
		p1 += f(a + h * (2 * k - 1));

	}
	for (int k = 2; k <= n / 2; k++)
	{
		p2 += f(a + h * (2 * k - 2));
	}

	return  h / 3 * (f(a) + 4 * p1 + 2 * p2 + f(b));

}


int main()
{
	double a, b;
	int n;
	setlocale(LC_CTYPE, "ru");
	cout << "Введите количество разбиений" << endl;
	cin >> n;
	a = 0;
	b = 1;
	cout << fixed << setprecision(10);
	cout << Integrate(a, b, n) << endl;

}

