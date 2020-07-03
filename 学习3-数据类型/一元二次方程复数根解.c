/*
#include<stdio.h>
#include <math.h>

main()
{
	float a, b, c;
	double delta, delta_s, x, x1, x2;
	double realpart = 0;							//定义实部
	double lmaginarypart = 0;						//定义虚部
	scanf_s("%f %f %f", &a, &b, &c);
	delta = (b * b) - (4 * a * c);					//delta计算
	delta_s = sqrt(fabs(delta));							//根号delta

	if (0 != a) {

		if (delta >= 0)
		{
			x1 = (-b + delta_s) / (2 * a);
			x2 = (-b - delta_s) / (2 * a);
			printf("两个实根\nx1=%f x2=%f", x1, x2);
		}

		else if (delta == 0)
		{
			x = (-b) / (2 * a);
			printf("x=%f", x);
		}
		else
		{
			realpart = -b / (2 * a);
			lmaginarypart = delta_s / (2 * a);
			printf("两个复数根\nx1=%f+%fi\nx2=%f-%fi",realpart,lmaginarypart,realpart,lmaginarypart);
		}
	}
}
*/