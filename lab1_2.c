#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	void Days(int, int, int);
	struct Date {
		int month;
		int day;
		int year;
	};

	struct Date collect = { 0 , 0, 0 };
	while (1)
	{
		printf("Input Data of Month, Day, Year in order to :");
		scanf("%d %d %d", &collect.month, &collect.day, &collect.year);
		Days(collect.month, collect.day, collect.year);
	}
	return 0; 
}

void Days(int month, int day, int year)
{
	int total = 0;
	total += 360 * (year - 2000);
	total += 30 * (month - 1);
	total += (day - 1);
	printf("Total days : %d\n", total);
}
