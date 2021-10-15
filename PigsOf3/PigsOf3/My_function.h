#pragma once
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//函数的声明
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
	//switch语句（判断时只能是整型或者字符型，不可以是一个区间）
	//给电影评分
	//10~9 经典
	//9~7 非常好
	//7~5 一般
	//5~1 烂片
	cout << "请评分：";
	int score = 0;
	cin >> score;
	cout << "您的评价分数为：" << score << endl;

	switch (score)
	{
	case 10:
		cout << "经典" << endl; break;//退出当前分支
	case 9: cout << "经典" << endl; break;
	case 8: cout << "非常好" << endl; break;
	case 7: cout << "非常好" << endl; break;
	case 6: cout << "一般" << endl; break;
	case 5: cout << "一般" << endl; break;
	default: cout << "烂片" << endl; break;
	}


	system("pause");
	return 0;
}

int guess_num()
{
	int num = 0;
	num = (rand() % 100) + 1;
	//cout << num << endl;
	cout << "请输入您猜测的数字：" << endl;
	int guess = 0;
	while (1)
	{
		cin >> guess;
		if (guess > num) {
			cout << "大了！" << endl;
		}
		if (guess < num) {
			cout << "小了！" << endl;
		}
		if (guess == num) {
			cout << "猜对啦！" << endl;
			break;
		}

	}


	system("pause");
	return 0;
}

int flower()//求水仙花数
{
	int i = 0;
	int num = 100;
	int num1 = 0;//百位数
	int num2 = 0;//十位数
	int num3 = 0;//个位数
	int flower_num = 0;
	do {
		num1 = num / 100;
		num2 = num % 100 / 10;
		num3 = num - num1 * 100 - num2 * 10;
		flower_num = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
		//cout << flower_num << endl;
		if (flower_num == num) {
			i++;
			cout << num << "是第"<<i<<"个水仙花数" << endl;
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
		num1 = i % 10;//个位数字
		num2 = i % 100 / 10;//十位数字
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

int Five_Pigs()//找出数组中最大的一个数字
{
	int a[5];
	cout << "请输入5只小猪的体重：" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		cout << "第" << i + 1 << "只小猪的体重为：" << a[i] << endl;
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
	cout << "第" << num_pig << "只小猪最重；" << "体重为：" << weight_pig << endl;
	system("pause");
	return 0;
}

int Trans_array()//数组元素逆置
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

int bubbling()//冒泡排序
{
	int x[10] = { 4,2,8,9,5,7,1,3,0,6 };
	int temp = 0;
	cout << "排序前：" << endl;
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
	cout << "冒泡排序后：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

int Test_Grades()//二维数组求行向量总和
{
	int grades[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++) {
		int sum_grades = 0;
		for (int j = 0; j < 3; j++) {
			sum_grades = sum_grades + grades[i][j];
			
		}
		cout << names[i] << "的总分为：" << sum_grades << endl;
	}
	system("pause");
	return 0;
}