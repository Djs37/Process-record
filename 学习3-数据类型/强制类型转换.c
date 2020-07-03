/*
#include<stdio.h>

main()
{
	float r = 5.2;
	float h = 20.3;
	float V;
	float S;
	int V_s;
	int S_s;
	float PI = 3.14159265358979323846;
	V = r * r * PI * h;
	S = 2.0 * PI * r * h;

	V_s = (int)(V);
	S_s = (int)(S);
	printf("%f %f\n", V, S+0.5);                   //float转换成int，会强制舍去小数，+0.5为了四舍五入
	printf("%d %d\n", V_s, S_s);

}
*/