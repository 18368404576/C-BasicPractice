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
int main(void)
{
	int a, b;
	printf("������Ҫ������2��������\r\n");
	scanf("%d,%d", &a, &b);
	swap(a, b);
	printf("��ָ�뺯������������:%d,%d", a, b);
	swap(&a, &b);
	printf("ָ�뺯������������:%d,%d", a, b);
}