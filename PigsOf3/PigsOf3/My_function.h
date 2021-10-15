#pragma once
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//����������
int move_evaluate();
int guess_num();
int flower();
int Knock_Desk();
int multiplication();
int Five_Pigs();
int Trans_array();
int bubbling();
int Test_Grades();

int move_evaluate()
{
	//switch��䣨�ж�ʱֻ�������ͻ����ַ��ͣ���������һ�����䣩
	//����Ӱ����
	//10~9 ����
	//9~7 �ǳ���
	//7~5 һ��
	//5~1 ��Ƭ
	cout << "�����֣�";
	int score = 0;
	cin >> score;
	cout << "�������۷���Ϊ��" << score << endl;

	switch (score)
	{
	case 10:
		cout << "����" << endl; break;//�˳���ǰ��֧
	case 9: cout << "����" << endl; break;
	case 8: cout << "�ǳ���" << endl; break;
	case 7: cout << "�ǳ���" << endl; break;
	case 6: cout << "һ��" << endl; break;
	case 5: cout << "һ��" << endl; break;
	default: cout << "��Ƭ" << endl; break;
	}


	system("pause");
	return 0;
}

int guess_num()
{
	int num = 0;
	num = (rand() % 100) + 1;
	//cout << num << endl;
	cout << "���������²�����֣�" << endl;
	int guess = 0;
	while (1)
	{
		cin >> guess;
		if (guess > num) {
			cout << "���ˣ�" << endl;
		}
		if (guess < num) {
			cout << "С�ˣ�" << endl;
		}
		if (guess == num) {
			cout << "�¶�����" << endl;
			break;
		}

	}


	system("pause");
	return 0;
}

int flower()//��ˮ�ɻ���
{
	int i = 0;
	int num = 100;
	int num1 = 0;//��λ��
	int num2 = 0;//ʮλ��
	int num3 = 0;//��λ��
	int flower_num = 0;
	do {
		num1 = num / 100;
		num2 = num % 100 / 10;
		num3 = num - num1 * 100 - num2 * 10;
		flower_num = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
		//cout << flower_num << endl;
		if (flower_num == num) {
			i++;
			cout << num << "�ǵ�"<<i<<"��ˮ�ɻ���" << endl;
		}
		num++; 
	} while (num < 1000);
	
	system("pause");
	return 0;
}

int Knock_Desk()
{
	int num1 = 0, num2 = 0;
	for (int i = 0; i <= 100; i++) {
		//cout << i%10 << endl;
		num1 = i % 10;//��λ����
		num2 = i % 100 / 10;//ʮλ����
		if (num1 == 7 || num2 == 7 || i % 7 == 0) {
			cout << "Knock! Desk!" << endl;
		}
		else
			cout << i << endl;
	}

	system("pause");
	return 0;
}

int multiplication()
{
	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << " x " << a << " = " << (a*b) << "  ";
			if (a == b) {
				cout << endl;
			}
			
		}
	}
	system("pause");
	return 0;
}

int Five_Pigs()//�ҳ�����������һ������
{
	int a[5];
	cout << "������5ֻС������أ�" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		cout << "��" << i + 1 << "ֻС�������Ϊ��" << a[i] << endl;
	}
	int weight_pig = a[0];
	int num_pig = 0;
	for (int i = 0; i < 5; i++) {
		//weight_pig = a[i];
		if (a[i] > weight_pig) {
			weight_pig = a[i];
			num_pig = i + 1;
		}
		cout << weight_pig << endl;
	}
	cout << "��" << num_pig << "ֻС�����أ�" << "����Ϊ��" << weight_pig << endl;
	system("pause");
	return 0;
}

int Trans_array()//����Ԫ������
{
	int F[5] = { 1,2,3,4,5 };
	int Tf[5] = { 0,0,0,0,0 };
	for (int i = 0; i < 5; i++) {
		Tf[i] = F[4 - i];
	}
	for (int i = 0; i < 5; i++) {
		cout << F[i] << ", ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << Tf[i] << ", ";
	}
	cout << endl;
	system("pause");
	return 0;
}

int bubbling()//ð������
{
	int x[10] = { 4,2,8,9,5,7,1,3,0,6 };
	int temp = 0;
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 10; i++) {
		cout << x[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (x[j + 1] < x[j]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	cout << "ð�������" << endl;
	for (int i = 0; i < 10; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

int Test_Grades()//��ά�������������ܺ�
{
	int grades[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++) {
		int sum_grades = 0;
		for (int j = 0; j < 3; j++) {
			sum_grades = sum_grades + grades[i][j];
			
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum_grades << endl;
	}
	system("pause");
	return 0;
}