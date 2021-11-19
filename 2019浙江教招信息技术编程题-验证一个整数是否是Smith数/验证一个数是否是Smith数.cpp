/*若一个合数的质因数分解式逐位相加之和等于其本身逐位相加之和，则称这个数为 Smith 数。
如4937775=3*5*5*65837，而 3+5+5+6+5+8+3+7=42，4+9+3+7+7+7+5=42，所以 4937775 是 Smith 数。给定一个正整数 N，判断 N 是否为 Smith 数。*/
#include <stdio.h>
void main()
{
	int a,b, sum1, sum2;
	sum1 = 0, sum2 = 0;
	printf("请输入一个整数:");
	scanf_s("%d", &a);
	printf("\r\n");
	b = a;
	/*因式分解*/
	for ( int i = 2; i <=a; i++)
	{
		if (a%i==0)
		{
			int s = i;
			while (s %10 !=0)
			{
				int k = s % 10;
				sum1 += k;
				s = s / 10;
			}
			sum1 += s;
			a = a / i;
			i = 2;
		}
	}
	printf("因式分解后每个质因数的每位数之和是:%d\r\n",sum1);
	/*取每位数字*/
	while (b % 10 != 0)
	{
		int p = b % 10;
		sum2 += p;
		b = b / 10;
	}
	sum2 += b;
	printf("每位数之和是:%d\r\n", sum2);
	if (sum1 == sum2)
	{
		printf("输入的数是Smith数");
	}
}