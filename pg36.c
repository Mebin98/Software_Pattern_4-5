#include <stdio.h>

void main()
{
	struct MonthDays {
		char name[10];
		int days;
	};

	struct MonthDays convert[12] = {
		{"jan", 31},
		{"feb", 28},
		{"mar", 31},
		{"apr", 30},
		{"may", 31},
		{"jun", 30},
		{"jul", 31},
		{"aug", 31},
		{"sep", 30},
		{"oct", 31},
		{"nov", 30},
		{"dec", 31}
	};

	for (int i = 0; i < 12; i++)
	{
		printf("%d %s %d\n", i + 1, convert[i].name, convert[i].days);
	}


	return 0; 
}