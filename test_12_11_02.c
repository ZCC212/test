#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* s1, char* s2)
{
	char* p = s1;
	assert(s1);
	assert(s2);
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s1++ = *s2++)
	{
		;
	}
	return p;
}
int main()
{
	char arr1[30] = "helloworld";
	char arr2[] = "zcc";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}