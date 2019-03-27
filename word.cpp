#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int i, u = 0, l = 0;
	for(i = 0; i < s.length(); i++)
	{
		if(isupper(s[i]))
			u++;
		else
			l++;
	}
	if(l >= u)
	{
		for(i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
	}
	else
	{
		for(i = 0; i < s.length(); i++)
			s[i] = toupper(s[i]);
	}
	cout<< s;
	return 0;
}