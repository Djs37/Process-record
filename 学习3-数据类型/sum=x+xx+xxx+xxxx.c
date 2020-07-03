/*
#include <stdio.h>
main()
{
	int x = 0;
	int n = 0;
	float sum = 0.0;
	float aa5 = 0.0;
	scanf_s("%d %d", &x, &n);
	if (x <= 0 || x > 9)
	{
		printf("请输入0-9");
	}
	else
	{
		while (0 != n)
		{
			sum = x + sum;			//sum是xxx
			aa5 = aa5 + sum;			//aa5是前几次的总和
			x = x * 10;				//xxx的首位由这个运算

			n--;
		}
		printf("%.1f", aa5);
	}

}
*/