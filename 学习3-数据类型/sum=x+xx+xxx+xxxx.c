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
		printf("������0-9");
	}
	else
	{
		while (0 != n)
		{
			sum = x + sum;			//sum��xxx
			aa5 = aa5 + sum;			//aa5��ǰ���ε��ܺ�
			x = x * 10;				//xxx����λ���������

			n--;
		}
		printf("%.1f", aa5);
	}

}
*/