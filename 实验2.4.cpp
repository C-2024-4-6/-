#include<iostream>
using namespace std;
int main()
{
	float ch, num1, num2, sum;
	cout << "�ӷ���1" << "\n" << "������2" << "\n" << "�˷���3" << "\n" << "������4" << "\n" << "�ٷֻ���5" << "\n" << "��ѡ�����㷽ʽ����������֣�";
	cin >> ch;
	if (ch == 5)
	{
		cout << "������ٷֻ������֣�";
			cin >> num1;
			sum = num1 * 100;
			cout << "����ǣ�" << sum <<"%"<< endl;
	}
	else if (ch != 5)
	{
		cout << "��������������������֣�";
		cin >> num1 >> num2;
		if (ch == 1)
		{
			sum = num1 + num2;
			cout << "����ǣ�" << sum << endl;
		}
		else if (ch == 2)
		{
			sum = num1 - num2;
			cout << "����ǣ�" << sum << endl;
		}
		else if (ch == 3)
		{
			
			sum = num1 * num2;
			cout << "����ǣ�" << sum << endl;
		}
		else if (ch == 4)
		{
			if (num2 == 0)
			{
				cout << "���󣬳������ܵ���0" << endl;
			}
			else if (num2 != 0)
			{
				sum = num1 / num2;
				cout << "����ǣ�" << sum << endl;
			}
		}
	}
}