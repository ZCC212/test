#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char* tmp = s1;
	//拷贝s2指向的字符串到s1指向的空间，包含'\0'
	while (*tmp++ = *s2++)
	{
		;
	}
	//返回目的空间的起始地址
	return tmp;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "zcc";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
}