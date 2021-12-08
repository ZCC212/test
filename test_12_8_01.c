#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("******************************\n");
	printf("****1.Add           2.Sub*****\n");
	printf("****3.Mul           4.Div*****\n");
	printf("****5.Xor           0.Exit******\n");
	printf("******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[ ])(int, int) = {0,Add,Sub,Mul,Div,Xor};
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
			printf("退出游戏！！！！！\n");
		else
		{
			printf("输入错误，请重新输入！！！！\n");
		}
	}while(input);
}