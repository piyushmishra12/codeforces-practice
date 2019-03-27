#include<iostream>
using namespace std;
int main()
{
	string a, b[100];
	cin>> a;
	int i, c = 1;
	for(i = 0; i < a.length(); i++)
	{
		if(a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
		{
			i = i + 2;
			if(c != 1)
				cout<< " ";
			continue;
		}
		else
		{
			c = 0;
			cout<< a[i];
		}
	}
	return 0;
}