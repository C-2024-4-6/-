#include<iostream>
using namespace std;
static int divisor(int a, int b)
{
	int t = 1, o = 0;
	int i = (a > b) ? a : b;
	for (t; t < i + 1; t++)
	{
		if (a % t == 0 && b % t == 0)
		{
			o = t;
		}
	}
	return o;
}
int main()
{
	int m, n;
	cout << "������m��";
	cin >> m;
	cout << "������n��";
	cin >> n;
	int u = 0;
	u = divisor(m, n);
	cout << "m��n�����Լ��Ϊ��" << u << endl;
	int p = 0;
	p = (m / u) * n;
	cout << "m��n����С������Ϊ��" << p << endl;

}