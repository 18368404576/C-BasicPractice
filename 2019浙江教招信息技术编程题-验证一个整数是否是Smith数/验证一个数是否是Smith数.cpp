/*��һ���������������ֽ�ʽ��λ���֮�͵����䱾����λ���֮�ͣ���������Ϊ Smith ����
��4937775=3*5*5*65837���� 3+5+5+6+5+8+3+7=42��4+9+3+7+7+7+5=42������ 4937775 �� Smith ��������һ�������� N���ж� N �Ƿ�Ϊ Smith ����*/
#include <stdio.h>
void main()
{
	int a,b, sum1, sum2;
	sum1 = 0, sum2 = 0;
	printf("������һ������:");
	scanf_s("%d", &a);
	printf("\r\n");
	b = a;
	/*��ʽ�ֽ�*/
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
	printf("��ʽ�ֽ��ÿ����������ÿλ��֮����:%d\r\n",sum1);
	/*ȡÿλ����*/
	while (b % 10 != 0)
	{
		int p = b % 10;
		sum2 += p;
		b = b / 10;
	}
	sum2 += b;
	printf("ÿλ��֮����:%d\r\n", sum2);
	if (sum1 == sum2)
	{
		printf("���������Smith��");
	}
}