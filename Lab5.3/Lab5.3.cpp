//Lab5.3
// IT-12 Taras Fihura

#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double t = gp;
	while (t <= gk)
	{
		z = f(pow(t, 2)) + 2 * f(2 * t + 1);
		cout << t << " " << z << endl;
		t += dg;
	}
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (sin(x + 1)) / (sin(x) + cos(x));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = 1. * pow(x, (2 * i) + 1) / (2*i-1) * (2*i);
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}




