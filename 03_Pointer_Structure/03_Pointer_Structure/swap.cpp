#include "swap.h"

//�����Ķ���
void swap(int *num1, int *num2)
{
	cout << "ת��ǰ��" << endl;
	cout << "num1=" << *num1 << endl;
	cout << "num2=" << *num2 << endl;
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	cout << endl << "ת����" << endl;
	cout << "num1=" << *num1 << endl;
	cout << "num2=" << *num2 << endl;
}

void Define_Use_point()
{
	int x = 5;
	int *p;
	p = &x;
	cout << "x�ĵ�ַΪ��" << &x << endl;
	cout << "ָ��pΪ��" << p << endl;
	cout << "������*p=" << *p << endl;
	*p = 1000;
	cout << "x=" << x << endl;
	cout << "*p=" << *p << endl;
}

void Room_for_point()
{
	//ָ����ռ�ռ�
	int a = 2;
	int *p = &a;
	cout << "ָ��pռ�õĿռ�Ϊ��" << sizeof(p) << endl;//��������ָ�붼ռ����ͬ�ֽڵ��ڴ�ռ�

}

void Zero_point()
{
	//1.��ָ�����ڸ�ָ��������г�ʼ��
	int * p = NULL;

	//2.��ָ���ǲ����Խ��з��ʵ�
	*p = 100;
}

void Wild_point()
{
	//Ұָ��
	//�ڳ����У������������Ұָ��
	int * p = (int *)0x1100;
	cout << *p << endl;
}

void Const_point()
{
	int a = 10;
	int b = 20;
	//1.const����ָ�루����ָ�룩
	const int *p1 = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p1 = 30;//����
	p1 = &b;//��ȷ
	//2.const���γ���
	int * const p2 = &a;
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 30;//��ȷ
	//p2 = &b;//����
	//3.const����ָ��ͳ���
	const int * const p3 = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ�򲻿��Ը�
	//*p3 = 30;//����
	//p3 = &b;//����
}

void Numbers_point()
{
	int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int * p = numbers;//numbers����������׵�ַ
	for (int i = 0; i < 10; i++) {
		cout << *p << "  " << p << endl;
		p++;
	}
}

void swap_p(int *p1, int *p2)
{
	//swap(*p1,*p2);
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void Bulling_point(int *arr, int len)//���������׵�ַ�����鳤��
{
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	PrintArr(arr, len);
}

void PrintArr(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	} 
	cout << endl;
}