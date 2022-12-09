#include <iostream>

using namespace std;
double C(int n, int k) {
	int fac_n = 1, fac_k = 1, fac_nk = 1, c;
	for (int i = 1; i <= n; i++)
	{
		fac_n *= i;
	}
	for (int i = 1; i <= k; i++)
	{
		fac_k *= i;
	}
	for (int i = 1; i <= (n - k); i++)
	{
		fac_nk *= i;
	}
	c = fac_n / (fac_k * fac_nk);
	return c;
}
double K(int n, int k, double c_nk)
{

	c_nk += C(n - 1, k) + C(n - 1, k);
	if (n > 0) {


		return K(k, n - 1, c_nk);
	}
	else
	{
		return c_nk;
	}

}
double F(int n, int k)
{
	if ((k == 0 || k == n))
	{
		return 1;
	}
	else
	{
		K(n, k, 1);
	}
}


int main()
{
	int n, k;
	double c;
	cout << "n="; cin >> n;
	cout << "k="; cin >> k;
	c = F(n, k);
	cout << c;
}