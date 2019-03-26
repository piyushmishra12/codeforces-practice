#include<iostream>
using namespace std;
int main()
{
	int n, t, i, j;
	cin>> n>> t;
	string s;
	cin>> s;
	while(t--)
	{
		for(i = 0; i < s.length(); i++)
		{
			j = i + 1;
			if(s[i] == 'B' && s[j] == 'G')
			{
				swap(s[i], s[j]);
				i = j;
			}
		}
	}
	cout<< s;
	return 0;
}