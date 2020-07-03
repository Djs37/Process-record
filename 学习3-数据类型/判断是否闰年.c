/*
#include<stdio.h>

main()
{
	int year, year1, pd;
	printf("请输入年份\n");
	scanf_s("%d", &year);
	pd = (!(year % 4) && year % 100) || (!(year % 100) && !(year % 400));
	if (pd == 1)
		printf("%d是闰年", year);
	else
	{
		printf("%d不是闰年", year);
	}

}
*/