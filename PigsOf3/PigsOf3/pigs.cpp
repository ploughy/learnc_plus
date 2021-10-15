#include <iostream>
//#include "tryswitch.cpp"
#include "My_function.h"
using namespace std;

int Three_Pigs()
{
	//三只小猪称体重
	double weight1 = 0.0;
	double weight2 = 0.0;
	double weight3 = 0.0;
	double temp = 0.0;

	cout << "请输入小猪A的体重：" << endl;
	cin >> weight1;

	cout << "请输入小猪B的体重：" << endl;
	cin >> weight2;

	cout << "请输入小猪C的体重：" << endl;
	cin >> weight3;

	if (weight1 > weight2)
	{
		if (weight1 > weight3) {
			cout << "小猪A最重" << endl;
		}
		else {
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if (weight2 > weight3) {
			cout << "小猪B最重" << endl;
		}
		else {
			cout << "小猪C最重" << endl;
		}
	}
	system("pause");
	return 0;
}

int grammer()
{
	//三目运算符
	int a = 10, b = 20;
	cout << "a=" << a << "; " << "b=" << b << "; " << endl;
	cout << "输出(a > b ? a : b)的结果:" << endl;
	cout << (a > b ? a : b) << endl;

	//switch语句

	system("pause");
	return 0;
}

int main()
{
	//Three_Pigs();
	//grammer();
	//move_evaluate();//影评打分
	//guess_num();//猜数字
	//flower();//求水仙花数
	//Knock_Desk();//抢七游戏
	//multiplication();//打印乘法口诀
	//Five_Pigs();//找出数组中最大的数
	//Trans_array();//数组元素逆置
	//bubbling();//冒泡排序
	Test_Grades();//二维数组求行向量总和
}