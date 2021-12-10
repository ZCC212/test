#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FindNum(int arr[3][3], int k, int* pa, int* pb)
{
	int x = 0;
	int y = *pb - 1;
	while (x <= *pa - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*pa = x;
			*pb = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是: %d %d", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}