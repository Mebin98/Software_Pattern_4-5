#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int rm = 0, rd = 0, ry = 0;
	void recent(int*, int*, int*, int*, int*, int*, int*, int*, int*);

	struct date {
		int month;
		int day;
		int year;
	}date[2] = {
		{0,0,0},
		{0,0,0}
	}; // Initialization

	for (int i = 0; i < 2; i++)
	{
		printf("날짜를 입력하세요 (월, 일, 년)[%d] :", i + 1);
		scanf("%d %d %d", &date[i].month, &date[i].day, &date[i].year); 
	}

	recent(&ry, &rm, &rd, &date[0].year, &date[1].year, &date[0].month, &date[1].month, &date[0].day, &date[1].day);

	printf("가장 최근의 날짜 %d / %d / %d\n", rm, rd, ry);

	return 0;
}

void recent(int*ry,int*rm,int*rd,int* y1, int* y2, int* m1, int* m2, int* d1, int* d2)
{
	if (*y1 > *y2)
	{
		*ry = *y1; *rm = *m1; *rd = *d1;
	}
	else if (*y2 > *y1)
	{
		*ry = *y2; *rm = *m2; *rd = *d2;
	}
	else if (*y1 == *y2)
	{
		if (*m1 > *m2)
		{
			*ry = *y1; *rm = *m1; *rd = *d1;
		}
		else if (*m2 > *m1)
		{
			*ry = *y2; *rm = *m2; *rd = *d2;
		}
		else if (*m1 == *m2)
		{
			if (*d1 > *d2)
			{
				*ry = *y1; *rm = *m1; *rd = *d1;
			}
			else if (*d2 > *d1)
			{
				*ry = *y2; *rm = *m2; *rd = *d2;
			}
			else if (*d1 == *d2)
			{
				printf("Dates are same");
			}
		}
	}
}