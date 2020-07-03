/*
#include <stdio.h>
main()
{
	int i, j, k, a, b;
	i = 0; j = 0; k = 0;	//i为百位，j为十位，k为个位


	for (i = 0; i <= 9; i++)
	{
		if ((i * i * i + j * j * j + k * k * k) == (i + j * 10 + k * 100))
			printf("%d\n", i * i * i + j * j * j + k * k * k);

		for (j = 0; j <= 9; j++)
		{
			if ((i * i * i + j * j * j + k * k * k) == (i + j * 10 + k * 100))
				printf("%d\n", i * i * i + j * j * j + k * k * k);

			for (k = 0; k <= 9; k++)
			{
				if ((i * i * i + j * j * j + k * k * k) == (i + j * 10 + k * 100))
					printf("%d\n", i * i * i + j * j * j + k * k * k);
			}
		}
	}

}
*/