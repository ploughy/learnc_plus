#include <iostream>
//#include "tryswitch.cpp"
#include "My_function.h"
using namespace std;

int Three_Pigs()
{
	//��ֻС�������
	double weight1 = 0.0;
	double weight2 = 0.0;
	double weight3 = 0.0;
	double temp = 0.0;

	cout << "������С��A�����أ�" << endl;
	cin >> weight1;

	cout << "������С��B�����أ�" << endl;
	cin >> weight2;

	cout << "������С��C�����أ�" << endl;
	cin >> weight3;

	if (weight1 > weight2)
	{
		if (weight1 > weight3) {
			cout << "С��A����" << endl;
		}
		else {
			cout << "С��C����" << endl;
		}
	}
	else
	{
		if (weight2 > weight3) {
			cout << "С��B����" << endl;
		}
		else {
			cout << "С��C����" << endl;
		}
	}
	system("pause");
	return 0;
}

int grammer()
{
	//��Ŀ�����
	int a = 10, b = 20;
	cout << "a=" << a << "; " << "b=" << b << "; " << endl;
	cout << "���(a > b ? a : b)�Ľ��:" << endl;
	cout << (a > b ? a : b) << endl;

	//switch���

	system("pause");
	return 0;
}

int main()
{
	//Three_Pigs();
	//grammer();
	//move_evaluate();//Ӱ�����
	//guess_num();//������
	//flower();//��ˮ�ɻ���
	//Knock_Desk();//������Ϸ
	//multiplication();//��ӡ�˷��ھ�
	//Five_Pigs();//�ҳ�������������
	//Trans_array();//����Ԫ������
	//bubbling();//ð������
	Test_Grades();//��ά�������������ܺ�
}