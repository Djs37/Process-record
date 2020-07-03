/*
#include<stdio.h>
#include <math.h>
#pragma warning(disable:4996)

main()
{
	float a = 0.0;
	float b = 0.0;
	float d = 0.0;
	char c;
	printf("请输入计算\n");
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
	case '+':
		d = a + b;
		break;
	case '-':
		d = a - b;
		break;
	case '*':
		d = a * b;
		break;
	case '/':
		if (0 != a)
			d = a / b;
		else
		{
			printf("除数为0\n");
			break;
		}

	}
	printf("结果为%f", d);
}
*/