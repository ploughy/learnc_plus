#include "Structure.h"

void add(int a, int b)
{
	cout << a + b << endl;
}

//void printStudent(Student stu)
//{
//	stu.age = 100;
//	cout << "学生姓名：" << stu.name << endl
//		<< "学生年龄：" << stu.age << endl
//		<< "学生分数：" << stu.score << endl;
//}
//
//void printStudent_point(const Student * stu)
//{
//	//stu->age = 100;
//	cout << "学生姓名：" << stu->name << endl
//		<< "学生年龄：" << stu->age << endl
//		<< "学生分数：" << stu->score << endl;
//}

void Define_TeacherandStudent(Teacher *Teachers,string *T_name,string *S_name,int *S_score,int number)
{
	int x = 0;
	for (int i = 0; i < number; i++) {
		Teachers[i].name = T_name[i];
		for (int j = 0; j < 5; j++) {
			Teachers[i].stu[j].name = S_name[j + x];
			Teachers[i].stu[j].score = S_score[j + x];
		}
		x = x + 5;
	}

	for (int i = 0; i < number; i++) {
		cout << "教师姓名：" << Teachers[i].name <<endl;
		cout << "学生信息：" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "	学生姓名：" << Teachers[i].stu[j].name << " 考试分数：" << Teachers[i].stu[j].score << endl;
		}
		cout << endl;
	}
	
}

void printHero(Hero *heros)
{
	for (int i = 0; i < 5; i++) {
		cout << "姓名：" << heros[i].name << " 年龄：" << heros[i].age << " 性别：" << heros[i].sex << endl;
	}
}

void Define_Hero(Hero *heros, string *H_Name, int *H_Age, string *H_Sex)
{
	for (int i = 0; i < 5; i++) {
		heros[i].name = H_Name[i];
		heros[i].age = H_Age[i];
		if (i < 4) {
			heros[i].sex = H_Sex[0];
		}
		else {
			heros[i].sex = H_Sex[1];
		}
	}
	cout << endl;
	cout << "排序前：" << endl;
	printHero(heros);
}

void Hero_sort(Hero *heros)
{
	Hero Temp;
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 0; j < 5 - 1; j++) {
			if (heros[j].age > heros[j + 1].age) {
				Temp = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = Temp;
			}
		}
	}
	cout << endl;
	cout << "排序后：" << endl;
	printHero(heros);
}