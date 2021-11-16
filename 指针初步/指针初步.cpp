#include <stdio.h>
void swap(int a, int b)
{
	int c;
	c = a;
	a = b;
	a = c;
}
void swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;

}
int main()
{
	int a, b;
	printf("请输入要交换的2个整数：\r\n");
	scanf_s("%d,%d", &a, &b);
	swap(a, b);
	printf("非指针函数交换后数据:%d,%d", a, b);
	swap(&a, &b);
	printf("指针函数交换后数据:%d,%d", a, b);
}