#include <stdio.h>
int main(void)
{
	int A;
	printf("������һ������:\r\n");
	scanf("%d", &A);
	//printf("%d=1", A);
	for (int i = 2; i <= A; i++)
	{
		if (A%i==0)
		{
			printf("%d\r\n", i);
			A = A / i;
			i = 1;
		}
	}

}