#include<iostream>
using namespace std;
int main()
{
	int n, count = 0;
	cin>> n;
	char colour[n];
	int i;
	for(i = 0; i < n; i++)
	{
		cin>> colour[i];
	}
	for(i = 0; i < n-1; i++)
	{
		if(colour[i] == colour[i+1])
			count++;
	}
	cout<< count;
	return 0;
}