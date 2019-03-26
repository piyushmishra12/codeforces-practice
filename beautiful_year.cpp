#include<iostream>
using namespace std;
int main()
{
	int y, y1, y2, y3, y4;
	cin>> y;
	while(1)
	{
		y = y + 1;
		y1 = y % 10;
		y2 = (y / 10) % 10;
		y3 = (y / 100) % 10;
		y4 = (y / 1000) % 10;
		if(y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4)
		{
			cout<< y;
			return 0;
		}
	}
	return 0;
}