#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, i, value = 0, count = 0, sum = 0, result = 0;
	cin>> n;
	int a[n];
	for(i = 0; i < n; i++)
		cin>> a[i];
	sort(a, a + n);
	for(i = 0; i < n; i++)
		sum = sum + a[i];
	value = sum / 2;
	while(result <= value)
	{
		result = result + a[n - count - 1];
		count++;
	}
	cout<< count;
	return 0;
}