#include<iostream>
using namespace std;
int main()
{
	char zimu, ch;
	cout << "������һ���ַ�:";
	cin >> zimu;
	if (zimu >= 'a' && zimu <= 'z')
	{
		zimu -= 32;
		cout << zimu;
	}
	else
	{
		zimu++;
		ch = static_cast<int>(zimu);
		cout << zimu;
	}
	return 0;
}