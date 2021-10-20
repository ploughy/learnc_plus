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
	//Define_Use_point();//定义和使用指针
	//Room_for_point();//指针所占的空间
	//Zero_point();//空指针
	//Wild_point();//野指针
	//Const_point();//const修饰指针
	//Numbers_point();
	//1、值传递
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//2、地址传递
	//如果地址传递，可以修饰实参
	swap_p(&a, &b);//地址交换
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	int numbers[10] = { 6,8,7,5,9,4,0,2,1,3 };
	Bulling_point(numbers, 10);
	add(3, 2);
	*/

	//2、通过学生类型创建具体学生

	//2.1、struct Student s1
	//2.2、struct Student s2 = {...}
	//2.3、在定义结构体时顺便创建结构体变量
	//struct Student s1;
	//给s1属性复制，通过.来访问结构体变量中的属性
	/*s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

	struct Student s2 = { "李四",19,95 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;*/

	//结构体数组
	//语法：struct 结构体名 数组名[元素个数] = { {} ， {} ， ... {} }
	//1、定义结构体
	//Structure.h中的Student结构体
	//2、创建结构体数组
	//Student stuArray[3] =
	//{
	//	{"张三",18,100},
	//	{"李四",20,99},
	//	{"王五",38,66}
	//};
	////3、给结构体数组中的元素赋值
	////上一步已经完成
	//stuArray[2].name = "赵六";
	//stuArray[2].age = 30;
	//stuArray[2].score = 60;
	////4、遍历结构体数组
	//for (int i = 0; i < 3; i++) {
	//	cout << "姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
	//}
	//Student s = { "张三",18,100 };

	//Student * p = &s;

	////cout << s.age << endl;
	//cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	/*Teacher t;
	t.id = 2021018;
	t.name = "老王";
	t.age = 50;
	t.stu.age = 18;
	t.stu.name = "张三";
	t.stu.score = 100;
	cout << "老师姓名：" << t.name
		<< " 老师编号：" << t.id
		<< " 老师年龄：" << t.age
		<< " 学生姓名：" << t.stu.name
		<< " 学生年龄：" << t.stu.age
		<< " 学生分数：" << t.stu.score
		<< endl;

	printStudent(t.stu);
	printStudent_point(&t.stu);*/

	string Teachers_Name[3] = { "老师1","老师2","老师3" };
	string Students_Name[15] = {
		"学生11" ,"学生12" ,"学生13" ,"学生14" ,"学生15" ,
		"学生21" ,"学生22" ,"学生23" ,"学生24" ,"学生25" ,
		"学生31" ,"学生32" ,"学生33" ,"学生34" ,"学生35" 
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
	string H_Names[5] = { "刘备","关羽","张飞","赵云","貂蝉" };
	string H_Sex[2] = { "男","女" };
	int H_Age[5] = { 23,22,20,21,19 };
	Define_Hero(HeroArr, H_Names, H_Age, H_Sex);
	//cout << HeroArr[1].name << endl;
	Hero_sort(HeroArr);

	system("pause");
	return 0;
}