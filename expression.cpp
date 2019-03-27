#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	cin>> a>> b>> c;
	int r[6];
	r[0] = a * b * c;
	r[1] = a + b * c;
	r[2] = a * b + c;
	r[3] = a + b + c;
	r[4] = a * (b + c);
	r[5] = (a + b) * c;
	sort(r, r + 6);
	cout<< r[5];
	return 0;
}