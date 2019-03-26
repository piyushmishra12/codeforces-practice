#include<iostream>
using namespace std;
int main()
{
	string a;
	int flag = 1;
	cin>> a;
	int i;
	for(i = 1; i < a.length(); i++)
	{
		if(islower(a[i]))
			flag = 0;
	}
	if(flag == 1)
	{
		for(i = 0; i < a.length(); i++)
		{
			if(islower(a[i]))
				a[i] = toupper(a[i]);
			else
				a[i] = tolower(a[i]);
		}
	}
	cout<< a;
	return 0;
}