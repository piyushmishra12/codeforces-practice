#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n, k;
	cin>> n>> k;
	if(k == 1)
		cout<< 1;
	else if(k > 1 && k <= ceil((1.0 * n)/2))
		cout<< 2 * k - 1;
	else
		cout<< (long long)(2 * (k - ceil((1.0 * n)/2)));
	return 0;
}