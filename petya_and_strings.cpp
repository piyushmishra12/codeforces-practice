#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	int i;
	cin>> a;
	cin>> b;
	for(i = 0; a[i] != '\0'; i++)
	{
		if('A' <= a[i] && a[i] <= 'Z')
			a[i] = char(((int)a[i]) + 32);
	}
	for(i = 0; b[i] != '\0'; i++)
	{
		if('A' <= b[i] && b[i] <= 'Z')
			b[i] = char(((int)b[i]) + 32);
	}
	if(a == b)
		cout<< 0;
	else if(a < b)
		cout<< -1;
	else if(a > b)
		cout<< 1;
	return 0;
}