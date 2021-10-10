#include <iostream>
using namespace std;

#define Day 7//宏常量

int main()
{
	const int month = 12;//const修饰的变量（常量）
	int a;
	a = 1;
	int A = 10;
	//Day = 14;//错误
	//month = 6;//错误，常量是不可修改的
	cout << "a=" << a << "	A=" << A << endl;
	cout << "Hello World！"<<endl;
	cout << "一年有" << month << "个月" << endl;
	cout << "一个星期有" << Day << "天" << endl;
	system("pause");
	return 0;
}