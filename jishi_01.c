#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cmp(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}
void two_printall(int temp, int m, int s, int  n, int* a, int* p)
{
	int i = 0;
	int j = 0;
	if (temp < 2)
	{
		for (j = 1; j <= m; j++)
		{
			if (j == s)
			{
				a[n - temp] = j;
				p[0]++;
				printf("( %d %d )", a[0], a[1]);
				printf("\n");
				break;
			}
		}
	}
	else if (temp == 2)
	{
		for (i = 1; i <= cmp(s, m); i++)
		{
			for (j = 1; j <= cmp(s, m); j++)
			{
				if ((i + j == s) && (i <= j)&&(i >= a[n-temp-1]))
				{
			
					a[n - temp] = i;
					
						a[n - temp + 1] = j;
						p[0]++;

						printf("( ");
						for (int x = 0; x < n; x++)
						{
							printf("%d ", a[x]);
						}
						printf(")\n");

						break;
					
				}
			}

		}
	}
	else
	{
		for (i = 1; i <= (s/temp,m); i++)
		{
			a[n - temp] = i;
			if (a[n - temp] >= a[n - temp - 1])
			{
				two_printall(temp-1, m, s-i, n, a, p);
				break;
			}
				
		}
	}
}
void printall(int n, int m, int s, int* p)
{
	int a[1000] = { 0 };
	int temp = n;
	int i = 0; 
	if (n >= 2)
	{
		while (temp >= 2) {
			for (i = 1; i <= s/n; i++)
			{
				a[n - temp] = i;
				two_printall(temp - 1, m, s - i, n, a, p);
			}
			break;
		}
	
	}
}
int main()
{
	int n = 0;
	int m = 0;
	int s = 0;
	int p[1] = { 0 };
	scanf("%d%d%d", &n, &m, & s);
	printall(n, m, s, p);
	printf("count = %d\n", p[0]);
}