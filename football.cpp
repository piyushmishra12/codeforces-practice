#include<iostream>
using namespace std;
int main()
{
	string a;
	int i, danger = 0;
	cin>> a;
	if(a.length() < 7)
		cout<< "NO";
	else
	{
		for(i = 0; a[i] != '\0'; i++)
		{
			if(a[i] == a[i-1])
			{
				danger++;
				if(danger == 7)
				{
					cout<< "YES";
					return 0;
				}
			}
			else
				danger = 1;
		}
		cout<< "NO";	
	}
	return 0;
}