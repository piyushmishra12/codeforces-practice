#include<iostream>
using namespace std;
int main()
{
	long long int n, m, a;
	cin>> n;
	cin>> m;
	cin>> a;
	long long int l, b;
	if(n%a == 0)
		l = n/a;
	else
		l = (n/a) + 1;

	if(m%a == 0)
		b = m/a;
	else
		b = (m/a) + 1;
	long long int f = l*b;
	cout<< f;
	return 0;
}