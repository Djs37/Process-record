//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//struct data
//{
//	int hour;
//	int min;
//	int sec;
//};
//
//struct data timeUpdata(struct data now);
//
//main()
//{
//
//
//	struct data testtime[3] =
//	{
//		{9,30,0},
//		{10,27,13},
//		{13,59,59},
//	};
//
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%2d:%2d:%2d\n", testtime[i].hour, testtime[i].min, testtime[i].sec);
//		testtime[i] = timeUpdata(testtime[i]);
//		printf("%2d:%2d:%2d\n", testtime[i].hour, testtime[i].min, testtime[i].sec);
//	}
//
//}
//
//
//struct data timeUpdata(struct data now)
//{
//	++now.sec;
//	if (now.sec >= 60)
//	{
//		now.sec = 0;
//		now.min++;
//	}
//	if (now.min >= 60)
//	{
//		now.min = 0;
//		now.hour++;
//	}
//	if (now.hour >= 24)
//	{
//		now.hour = 0;
//	}
//	return (now);
//}