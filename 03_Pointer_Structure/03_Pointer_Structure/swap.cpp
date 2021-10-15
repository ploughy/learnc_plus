#include "swap.h"

//函数的定义
void swap(int num1, int num2)
{
	cout << "转换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << endl << "转换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
}

void Define_Use_point()
{
	int x = 5;
	int *p;
	p = &x;
	cout << "x的地址为：" << &x << endl;
	cout << "指针p为：" << p << endl;
	cout << "解引用*p=" << *p << endl;
	*p = 1000;
	cout << "x=" << x << endl;
	cout << "*p=" << *p << endl;
}

void Room_for_point()
{
	//指针所占空间
	int a = 2;
	int *p = &a;
	cout << "指针p占用的空间为：" << sizeof(p) << endl;//所有类型指针都占用相同字节的内存空间

}

void Zero_point()
{
	//1.空指针用于给指针变量进行初始化
	int * p = NULL;

	//2.空指针是不可以进行访问的
	*p = 100;
}

void Wild_point()
{
	//野指针
	//在程序中，尽量避免操纵野指针
	int * p = (int *)0x1100;
	cout << *p << endl;
}

void Const_point()
{
	int a = 10;
	int b = 20;
	//1.const修饰指针（常量指针）
	const int *p1 = &a;
	//指针指向的值不可以改，指针的指向可以改
	//*p1 = 30;//错误
	p1 = &b;//正确
	//2.const修饰常量
	int * const p2 = &a;
	//指针的指向不可以改，指针指向的值可以改
	*p2 = 30;//正确
	//p2 = &b;//错误
	//3.const修饰指针和常量
	const int * const p3 = &a;
	//指针指向的值不可以改，指针的指向不可以改
	//*p3 = 30;//错误
	//p3 = &b;//错误
}