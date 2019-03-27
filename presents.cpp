#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin>> n;
	int a[n], b[n];
	for(i = 0; i < n; i++)
	{
		cin>> a[i];
		b[i] = i + 1;
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
		}
	}
	for(i = 0; i < n; i++)
		cout<< b[i]<< " ";
	return 0;
}