#include<iostream>
using namespace std;
int main()
{
	float x=0,a=0,y=0;
	cout << "������a��ֵ��";
	cin >> a ;
	
	x = a;
	if (a < 0)
	{
		return false;
	}
	while (1)
	{
		y = 1.0 / 2.0 * (x + a / x);
		float absoluteValue = abs(y - x);
		if (absoluteValue < 1e-5)
		{
			break;
		}
		x = y;
	}
	cout << "a��ƽ����Ϊ��" << x<< endl;
}