#include<iostream>
using namespace std;
int main()
{
	int n, p, v, t, count = 0;
	cin>> n;
	while(n--)
	{
		cin>> p>> v>> t;
		if(p + v + t >= 2)
			count++;
	}
	cout<< count;
	return 0;
}