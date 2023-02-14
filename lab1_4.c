#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	void recent(int, int, int, int, int, int);

	struct order {
		int month;
		int day;
		int year;
	};

	struct order table[2] = {
		{0,0,0},
		{0,0,0}
	};

	for (int i = 0; i < 2; i++)
	{
		printf("Month  Day  Year\n");
		scanf("%d %d %d", &table[i].month, &table[i].day, &table[i].year);
	}
	recent(table[0].year, table[1].year, table[0].month, table[1].month, table[0].day,table[1].day);
	return 0;
}

void recent(int year1, int year2, int mon1, int mon2, int day1, int day2)
{
	if (year1 > year2)
	{
		printf("Recent date : %d / %d / %d\n", mon1, day1, year1);
	}
	else if (year2 > year1)
	{
		printf("Recent date : %d / %d / %d\n", mon2, day2, year2);
	}
	else if (year1 == year2)
	{
		if (mon1 > mon2)
		{
			printf("Recent date : %d / %d / %d\n", mon1, day1, year1);
		}
		else if (mon2 > mon1)
		{
			printf("Recent date : %d / %d / %d\n", mon2, day2, year2);
		}
		else if (mon1 == mon2)
		{
			if (day1 > day2)
			{
				printf("Recent date : %d / %d / %d\n", mon1, day1, year1);
			}
			else if (day2 > day1)
			{
				printf("Recent date : %d / %d / %d\n", mon2, day2, year2);
			}
			else if(day1 == day2)
			{
				printf("Dates are same");
			}
		}
	}
}