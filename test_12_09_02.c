#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//判断i是不是水仙花数（自幂函数）
		//1.计算i的位数
		int n = 1;
		int temp = i;
		int sum = 0;
		while (temp /= 10)
		{
			n++;
		}
	   //2.计算i每位数的n次方的和 sum
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		if (i == sum)
		{
			printf("%d\n", i);
		}
		//3.比较i == sum
	}
	return 0;
}