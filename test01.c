#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz) {
	int i =0;
	for (i = 0; i < sz/2; i++)
	{
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[sz-1-i];
		arr[sz-i-1]=temp;
	}
}
int main()
{
	int sz = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
	sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);//对数组初始化0
	Print(arr,sz);
	Reverse(arr,sz);
	Print(arr, sz);
	return 0;
}