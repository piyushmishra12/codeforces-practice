#include<iostream>
using namespace std;
int main()
{
	int a, numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	cin>> a;
	int i;
	for(i = 0; i < 14; i++)
	{
		if(a % numbers[i] == 0)
		{
			cout<< "YES";
			return 0;
		}
		
	}
	cout<< "NO";
	return 0;
}