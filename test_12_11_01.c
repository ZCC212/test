#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char* tmp = s1;
	//����s2ָ����ַ�����s1ָ��Ŀռ䣬����'\0'
	while (*tmp++ = *s2++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
	return tmp;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "zcc";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
}