#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	
	int letters = 0, spaces = 0, digits = 0, others = 0;
	char shifts = '\n';
	char c;
	
	cout << "������һ���ַ���" << endl;
	cin >> c;
	while (cin.get(c))
	{
		if (c == '\n')
			break;
		if (isalpha(c))
		{
			letters++;
		}
		if (isspace(c))
		{
			spaces++;
		}
		if (isdigit(c))
		{
			digits++;
		}

		else
		{
			others++;
		}
	}
		cout << "��ĸ�У�" << letters << "��" << endl;
		cout << "�ո��У�"<<spaces<<"��" << endl;
		cout << "�����У�"<<digits<<"��" << endl;
		cout << "�����ַ��У�"<<others<<"��" << endl;
		return 0;
}