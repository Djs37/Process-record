#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"shengmin.h"
#pragma warning(disable:4996)



int main()
{
	struct
	{
		int x;
		int y;
	}pont;

	pont.x = 15;
	pont.y = 10;

	printf("x:%d\ny:%d\nÃæ»ý:%d\n", pont.x, pont.y, pont.x* pont.y);

}


