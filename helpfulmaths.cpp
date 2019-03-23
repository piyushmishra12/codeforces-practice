#include<iostream>
using namespace std;
int main()
{
	string a;
	int i, j;
	cin>> a;
	int n = a.length();
	for(i = 0; i < n; i += 2)
	{
		for(j = i; j < n; j += 2)
		{
			if(a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	cout<< a;
	return 0;
}