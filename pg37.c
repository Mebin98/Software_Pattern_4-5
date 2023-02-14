#include <stdio.h>

void main()
{
	float total_gross = 0;

	struct employee {
		int ID;
		char name[20];
		float pay_rate;
		float hours_worked;
	};

	struct employee table[6] = {
		{3462, "Jones", 4.62, 40.0},
		{6793, "Robbins", 5.83, 38.5},
		{6985, "Smith", 5.22, 45.5},
		{7834,"Swain", 6.89, 40.0},
		{8867,"Timmins",6.43,35.5},
		{9002,"Williams", 4.75, 42.0}
	};

	printf("ID Number   Name   Gross Pay\n");
	printf("===============================================\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d   %s   %.2f\n", table[i].ID, table[i].name, table[i].pay_rate* table[i].hours_worked);
		total_gross += table[i].pay_rate * table[i].hours_worked;
	}
	printf("===============================================\n");
	printf("   total gross : %.2f\n", total_gross);
	return 0;
}