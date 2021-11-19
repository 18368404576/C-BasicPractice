#include <stdio.h>
void main()
{
	int a;
	printf("请输入一个整数:\r\n");
	scanf_s("%d", &a);
	while (a/10!=0)
	{
		int i;
		i = a % 10;
		a = a / 10;
		printf("%d", i);
	}
	printf("%d", a);
}