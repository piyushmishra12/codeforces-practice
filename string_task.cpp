#include<iostream>
using namespace std;
int main()
{
	string a, b;
	cin>> a;
	int length = a.length();
	int i, j;
	for(i = 0; a[i] != '\0'; i++)
	{
		if('A' <= a[i] && a[i] <= 'Z')
			a[i] = char(((int)a[i]) + 32);
	}
	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'y')
		{
			cout<< "."<< a[i];
		}
	}
	return 0;
}