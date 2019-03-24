#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, i;
	cin>> n;
	int enter[n], exit[n], net_enter[n];
	for(i = 0; i < n; i++)
	{
		cin>> exit[i];
		cin>> enter[i];
	}
	net_enter[0] = enter[0];
	for(i = 1; i < n; i++)
	{
		net_enter[i] = net_enter[i - 1] - exit[i] + enter[i];
	}
	sort(net_enter, net_enter + n);
	cout<< net_enter[n - 1];
	return 0;
}