#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m, d, y; 

	scanf("%d %d %d", &m, &d, &y); 
	struct {
		int month;
		int day;
		int year;
	}date = { m, d, y }; 

	printf("%d\n", date.month);
	printf("%d\n", date.day);
	printf("%d\n", date.year);
}