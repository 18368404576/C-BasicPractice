#include <stdio.h>
void main()
{
	int A;
	printf("������һ������:\r\n");
	scanf_s("%d", &A);
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