#include<iostream>
using namespace std;
int main()
{
	float F = 0;
	float C = 0;
	cout << "�����뻪���¶ȣ�";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "�����¶��ǣ�"<<C << endl;
	printf("%.2f\n", C);
	return 0;
}