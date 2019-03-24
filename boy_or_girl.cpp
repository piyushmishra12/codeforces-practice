#include<iostream>
using namespace std;
int main()
{
	string a;
	int i, j, k, n;
	cin>> a;
	n = a.length();
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				for(k = j; k < n; k++)
					a[k] = a[k + 1];
				n--;
				j--;
			}
		}
	}
	if(n%2 != 0)
		cout<< "IGNORE HIM!";
	else
		cout<< "CHAT WITH HER!";
	return 0;
}