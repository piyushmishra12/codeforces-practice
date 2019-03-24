#include<iostream>
using namespace std;
int main()
{
	string s, h = "hello";
	cin>> s;
	int i, j = 0, count;
	for(i = 0; i < s.length(); i++)
	{
		if(s[i] == h[j])
		{
			j++;
			count++;
		}
	}
	if(count == 5)
		cout<< "YES";
	else
		cout<< "NO";
	return 0;
}