#include <iostream>
using namespace std;
int main()
{
	//整型
	//1、短整型(-2^15->2^15-1)
	short num1 = 10;
	//2、整型(-2^31->2^31-1)
	int num2 = 10;
	//3、长整型(-2^31->2^31-1)
	long num3 = 10;
	//4、长长整型(-2^63->2^63-1)
	long long num4 = 10;
	
	cout << "num1=" << num1 << endl;
	cout << "short类型所占内存空间为：" << sizeof(short) << endl;
	cout << "num2=" << num2 << endl;
	cout << "int类型所占内存空间为：" << sizeof(int) << endl;
	cout << "num3=" << num3 << endl;
	cout << "long类型所占内存空间为：" << sizeof(num3) << endl;
	cout << "num4=" << num4 << endl;
	cout << "long long类型所占内存空间为：" << sizeof(num4) << endl;
	system("pause");
	return 0;
}