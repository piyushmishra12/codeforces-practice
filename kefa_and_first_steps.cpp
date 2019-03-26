#include<iostream>
using namespace std;
int main()
{
	int n, i, count = 0, max = 0;
	cin>> n;
	int a[n];
	for(i = 0; i < n; i++)
		cin>> a[i];
	for(i = 1; i < n; i++)
	{
		if(a[i] >= a[i-1])
		{
			count++;
			if(count > max)
				max = count;
		}
		else
		{
			if(count > max)
				max = count;
			count = 0;
		}
	}

	cout<< max + 1;
	return 0;
}