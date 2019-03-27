#include<iostream>
using namespace std;
int main()
{
	int k, l, m, n, d, count = 0;
	cin>> k>> l>> m>> n>> d;
	int i, a[d];
	for(i = 0; i < d; i++)
		a[i] = 1;
	for(i = k - 1; i < d; i = i + k)
		a[i] = 0;
	for(i = l - 1; i < d; i = i + l)
		a[i] = 0;
	for(i = m - 1; i < d; i = i + m)
		a[i] = 0;
	for(i = n - 1; i < d; i = i + n)
		a[i] = 0;
	for(i = 0; i < d; i++)
	{
		if(a[i] == 0)
			count++;
	}
	cout<< count;
	return 0;
}