#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void setTime(int H, int M, int S)
	{
		hour = H, minute = M, sec = S;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1; //����t1ΪTime�����
	t1.showTime();
	t1.setTime(9,30,0);
	t1.showTime();
	return 0;
}