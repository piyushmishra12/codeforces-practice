#include<iostream>
using namespace std;
int main()
{
	int k, n, w, sum = 0, i;
	cin>> k>> n>> w;
	for(i = 1; i <= w; i++)
		sum = sum + i;
	int result = (k * sum) - n;
	if(result < 0)
		cout<< 0;
	else
		cout<< result;
	return 0;
}