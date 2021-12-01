#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int get_diff_bit(int m, int n)
{
	int temp = 0;
	temp = m ^ n;
	int count = 0;
	while (temp)
	{
		temp &= (temp - 1);
			count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count=get_diff_bit(m, n);
	printf("count= %d\n", count);
	return 0;
}