#include <iostream>
#include <string>
#include <cstdlib>
#include "swap.h"
#include "Structure.h"
using namespace std;

int main()
{
	/*
	int a = 2, b = 7;
	swap(&a, &b);
	cout << "b=" << b << endl;
	//Define_Use_point();//�����ʹ��ָ��
	//Room_for_point();//ָ����ռ�Ŀռ�
	//Zero_point();//��ָ��
	//Wild_point();//Ұָ��
	//Const_point();//const����ָ��
	//Numbers_point();
	//1��ֵ����
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//2����ַ����
	//�����ַ���ݣ���������ʵ��
	swap_p(&a, &b);//��ַ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	int numbers[10] = { 6,8,7,5,9,4,0,2,1,3 };
	Bulling_point(numbers, 10);
	add(3, 2);
	*/

	//2��ͨ��ѧ�����ʹ�������ѧ��

	//2.1��struct Student s1
	//2.2��struct Student s2 = {...}
	//2.3���ڶ���ṹ��ʱ˳�㴴���ṹ�����
	//struct Student s1;
	//��s1���Ը��ƣ�ͨ��.�����ʽṹ������е�����
	/*s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	struct Student s2 = { "����",19,95 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;*/

	//�ṹ������
	//�﷨��struct �ṹ���� ������[Ԫ�ظ���] = { {} �� {} �� ... {} }
	//1������ṹ��
	//Structure.h�е�Student�ṹ��
	//2�������ṹ������
	//Student stuArray[3] =
	//{
	//	{"����",18,100},
	//	{"����",20,99},
	//	{"����",38,66}
	//};
	////3�����ṹ�������е�Ԫ�ظ�ֵ
	////��һ���Ѿ����
	//stuArray[2].name = "����";
	//stuArray[2].age = 30;
	//stuArray[2].score = 60;
	////4�������ṹ������
	//for (int i = 0; i < 3; i++) {
	//	cout << "������" << stuArray[i].name << " ���䣺" << stuArray[i].age << " ������" << stuArray[i].score << endl;
	//}
	//Student s = { "����",18,100 };

	//Student * p = &s;

	////cout << s.age << endl;
	//cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	/*Teacher t;
	t.id = 2021018;
	t.name = "����";
	t.age = 50;
	t.stu.age = 18;
	t.stu.name = "����";
	t.stu.score = 100;
	cout << "��ʦ������" << t.name
		<< " ��ʦ��ţ�" << t.id
		<< " ��ʦ���䣺" << t.age
		<< " ѧ��������" << t.stu.name
		<< " ѧ�����䣺" << t.stu.age
		<< " ѧ��������" << t.stu.score
		<< endl;

	printStudent(t.stu);
	printStudent_point(&t.stu);*/

	string Teachers_Name[3] = { "��ʦ1","��ʦ2","��ʦ3" };
	string Students_Name[15] = {
		"ѧ��11" ,"ѧ��12" ,"ѧ��13" ,"ѧ��14" ,"ѧ��15" ,
		"ѧ��21" ,"ѧ��22" ,"ѧ��23" ,"ѧ��24" ,"ѧ��25" ,
		"ѧ��31" ,"ѧ��32" ,"ѧ��33" ,"ѧ��34" ,"ѧ��35" 
	};
	/*int Students_score[15] = {
		100 ,95 ,60 ,85 ,89 ,
		96 ,84 ,99 ,71 ,100 ,
		56 ,66 ,87 ,100 ,82
	};*/
	int Students_score[15];
	for (int i = 0; i < 15; i++) {
		int random = rand() % 61 + 40;//40~100
		Students_score[i] = random;
	}
	Teacher t1, t2, t3;
	Teacher T[3] = { t1,t2,t3 };
	Define_TeacherandStudent(T, Teachers_Name,Students_Name,Students_score,3);

	Hero HeroArr[5];
	string H_Names[5] = { "����","����","�ŷ�","����","����" };
	string H_Sex[2] = { "��","Ů" };
	int H_Age[5] = { 23,22,20,21,19 };
	Define_Hero(HeroArr, H_Names, H_Age, H_Sex);
	//cout << HeroArr[1].name << endl;
	Hero_sort(HeroArr);

	system("pause");
	return 0;
}