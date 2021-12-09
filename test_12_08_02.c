#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{  

		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//读取一行
	reverse(arr);
	printf("逆序后的字符:>%s\n", arr);
	return 0;
}
