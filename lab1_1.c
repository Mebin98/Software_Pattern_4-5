#include <stdio.h>

void main()
{
	int tot_value[5];
	int average = 0;

	struct car {
		int number;
		int miles;
		int gallon;
	};

	struct car table[5] = {
		{25, 1450, 62},
		{36, 3240, 146},
		{44, 1792, 76},
		{52,2360,105},
		{68,2114,67}
	};

	printf("Car number   Miles Driven   Gallons Used\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d %15d %15d\n", table[i].number, table[i].miles, table[i].gallon);
		tot_value[i] = (table[i].miles / table[i].gallon);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("car number : %d  /  miles per gallon : %d\n", table[i].number , tot_value[i]);
		average += tot_value[i] / 5;
	}
	printf("miles per gallon Average : %d\n", average);
	
	return 0;
}