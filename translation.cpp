#include<iostream>
using namespace std;
int main()
{
	string s, t;
	int i = 0;
	cin>> s>> t;
	int n = s.length();
	int m = t.length();
	if(n != m)
		cout<< "NO";
	else
	{
		while(s[i] != '\0')
		{
			if(s[i] == t[n - 1 - i])
				i++;
			else
			{
				cout<< "NO";
				return 0;
			}
		}
		cout<< "YES";
	}
	return 0;
}