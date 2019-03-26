#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m, diff;
	cin>> n >> m;
	int a[m], i;
	for(i = 0; i < m; i++)
		cin>> a[i];
	sort(a, a + m);
	diff = a[n - 1] - a[0];
	for(i = 0; i <= m - n; i++)
	{
		if(a[i + n - 1] - a[i] < diff)
			diff = a[i + n - 1] - a[i];
	}
	cout<< diff;
	return 0;
}