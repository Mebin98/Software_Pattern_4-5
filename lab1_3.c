#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	void Days(int*, int*, int*);
	
	struct Date {
		int month;
		int day;
		int year;
	}collect = {0,0,0};

	scanf("%d %d %d", &collect.month, &collect.day, &collect.year);
	Days(&collect.month, &collect.day, &collect.year);
	return 0;
}

void Days(int* month, int* day, int* year)
{
	int total = 0;
	total += (*year - 2000) * 360;
	total += (*month - 1) * 30;
	total += (*day - 1);
	printf("Date Gap : %d days", total);
}