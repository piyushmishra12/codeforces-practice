#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>> a;
	int i;
	for(i = 0; i < a.length(); i++)
	{
		if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
		{
			cout<< "YES";
			return 0;
		}
	}
	cout<< "NO";
	return 0;
}