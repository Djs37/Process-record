/*

#include<stdio.h>
#pragma warning(disable:4996)

int i = 0, j = 0, k = 0;
char c;
char g_emcryption();
char g_scanf();


char encryption[1000] = { '\t' };

main()
{
	g_emcryption();
	g_scanf();
	printf("有%d位数\n", j);
	printf("加密后得：\n", j);
	for (j = 0; j < k; j++)
	{
		printf("%c", encryption[j]);
	}
}

char g_emcryption()
{
	for (i = 0; i < 1000; i++)
	{
		encryption[i] = '\t';
	}
}

char g_scanf()
{
	for (j = 0; j < 1000; j++)
	{
		c = getchar();

		if (c != '\n')
		{
			if (('w'<=c)&&('z'>=c))
			{
				c = c - 22;
			}
			if (('W' <= c) && ('Z' >= c))
			{
				c = c - 22;
			}
			encryption[j] = c;
			k++;
		}
		else
		{
			break;
		}


	}

}

*/