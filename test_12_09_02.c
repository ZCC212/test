#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//�ж�i�ǲ���ˮ�ɻ��������ݺ�����
		//1.����i��λ��
		int n = 1;
		int temp = i;
		int sum = 0;
		while (temp /= 10)
		{
			n++;
		}
	   //2.����iÿλ����n�η��ĺ� sum
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
		//3.�Ƚ�i == sum
	}
	return 0;
}