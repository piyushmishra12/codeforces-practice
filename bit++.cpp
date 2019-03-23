#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, x = 0;
	string a;
	cin>> n;
	while(n--)
	{
		cin>> a;
		if(a[1] == '+')
			++x;
		else if(a[1] == '-')
			--x;
	}
	cout<< x;
	return 0;
}