#pragma once
#include <iostream>
#include <string>
using namespace std;

void add(int a, int b);


//1.结构体定义
//语法：struct 类型名称{成员列表}
struct Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	//int age;

	//分数
	int score;
	
};

struct Teacher
{
	//int id;
	string name;
	//int age;
	struct Student stu[5];//辅导的学生
};

struct Hero
{
	string name;
	int age;
	string sex;
};

void printStudent(Student stu);
void printStudent_point(Student * stu);
void Define_TeacherandStudent( Teacher *Teachers,string *T_name,string *S_name,int *S_score,int number);
void Define_Hero(Hero *heros,string *H_Name,int *H_Age,string *H_Sex);
void printHero(Hero *heros);
void Hero_sort(Hero *heros);