//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"  
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num <<endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int Num,const char Name[20], char Sex)
{
    num = Num,sex = Sex;
    for (int i = 0; i < 20; i++)
    {
        this->name[i] = Name[i];
    }
}