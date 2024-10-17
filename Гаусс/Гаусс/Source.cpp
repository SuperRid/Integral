#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>
#include<iomanip>


using namespace std;

double f(double x)
{
	return sin(x)/sqrt(x);
}

double Integrate(double a, double b)
{
	int n = 4;
	double sum = 0;
	//double t[] = {-0.96028986,-0.79666648, -0.52553242, -0.18343464, 0.18343464, 0.52553242, 0.79666648, 0.96028986};
	//double A[] = { 0.10122854, 0.22238104, 0.31370664, 0.36268378, 0.36268378, 0.31370664, 0.22238104, 0.10122854};
	//double t[] = { -0.86113631, -0.33998104, 0.33998104, 0.86113631 };
	//double A[] = { 0.34785484, 0.65214516, 0.65214516, 0.34785484 };
	//double t[] = { -0.57735027, 0.57735027 };
	//double A[] = { 1,1 };
	double t[] = { -0.90617985,-0.53846931,0,0.53846931, 0.90617985 };
	double A[] = { 0.23692688,0.47862868,0.56888889, 0.47862868,0.23692688 };
	for (int k = 0; k <= n; k++)
	{
		sum += A[k] * f(((a+b)/2)+(t[k]*(b-a)/2));
	}
	
	return  (b - a) * sum/2;

}


int main()
{
	double a = 0, b = M_PI;
	setlocale(LC_CTYPE, "ru");
	cout << std::setprecision(7) << Integrate(a, b) << endl;
	

}




