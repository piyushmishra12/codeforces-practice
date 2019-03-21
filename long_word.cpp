#include<iostream>
using namespace std;
int main()
{
	int n;
	int count;
	cin>> n;
	string a[n];
	int i = 0, j;
	for(i = 0; i < n; i++)
		cin>> a[i];
	for(i = 0; i < n; i++)
	{
		count = 0;
		for(j = 0; a[i][j] != '\0'; j++)
			count++;
		if(count <= 10)
			cout<< a[i];
		else
		{
			cout<< a[i][0];
			cout<< count - 2;
			cout<< a[i][j-1];
		}
		cout<< "\n";

	}
	return 0;
}