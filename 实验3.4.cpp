#include<iostream>
#include"mytraingle.cpp"
using namespace std;
int main()
{
	double L1, L2, L3;
	cout << "���������߳���";
	cin >> L1 >> L2 >> L3;
	double area = 0, panduan;
	panduan = is_valid(L1, L2, L3);
	if (panduan == 0)
	{
		return false;
	}
	else
	{
		area = double_area(L1, L2, L2);
		cout << "�����ε����Ϊ��" << area << endl;
	}
}
