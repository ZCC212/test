#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(char* s1, char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main()
{
	char* p1 = "abcdefg";
	char* p2 = "abcdehg";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);
}