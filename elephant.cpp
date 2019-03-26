#include<iostream>
using namespace std;
int main()
{
	int x, i, m5, r5, m4, r4, m3, r3, m2, r2, m1, r1;
	cin>> x;
	m5 = x / 5;
	r5 = x % 5;
	m4 = r5 / 4;
	r4 = r5 % 4;
	m3 = r4 / 3;
	r3 = r4 % 3;
	m2 = r3 / 2;
	r2 = r3 % 2;
	m1 = r2 / 1;
	r1 = r2 % 1;
	cout<< m5 + m4 + m3 + m2 + m1;
	return 0;

}