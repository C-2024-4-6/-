#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "���������߳���";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout<<"���������޷�����������"<<endl;
	}
	else
	{
		double perimeter = 0;
		perimeter = a + b + c;
		cout << "�ܳ��ǣ�" << perimeter << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}	
}