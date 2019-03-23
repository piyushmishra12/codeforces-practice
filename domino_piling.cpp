#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, n;
	cin>> m>> n;
	int h = floor(m/2) * n;
	int v = (m - (2 * floor(m/2))) * floor(n/2);
	cout<< (h+v);
	return 0;
}