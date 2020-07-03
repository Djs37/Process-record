/*
#include <stdio.h>
main()
{
	int i, j, k, a, b;
	i = 0; j = 0; k = 0;	//i为百位，j为十位，k为个位


	for (a = 100; a < 1000; a++)
	{
		i = a / 100;
		j = a / 10 % 10;
		k = a % 10;
		if ((i * i * i + j * j * j + k * k * k) == (i * 100 + j * 10 + k))
		{
			printf("%d\n", i * i * i + j * j * j + k * k * k);
		}
	}

}
*/