#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count_bit_one(unsigned int x)//ȡ������λ������һ��ֵ
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x = x / 2;
//	}
//	return count;
//}
int count_bit_one(int n)
{
	int i = 0;
	int count = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if ((n & 1 )== 1)
	//	{
	//		count++;
	//	}
	//	n = n >> 1;
	//}
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
	int count = count_bit_one(a);
	printf("%d ", count);
	return 0;
}