#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.
//void reverse(char* left, char* right)
//{
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//	
//
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len ; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//2.
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	//1.在s1中追加一个s1字符串
	//strcat--erro对自己使用
	strncat(s1, s1,len);
	//判断s2指向的字符串是不是s1指向的字符串的子串
	//str--找子串的
	char* ret = strstr(s1, s2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefa";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}