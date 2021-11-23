#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i <sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}