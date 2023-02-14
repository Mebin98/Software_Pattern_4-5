#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	struct {
		char name[20];
		float per;
		float price;
	}data;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s %f %f", data.name, &data.per, &data.price);
		printf("company name : %s\n", data.name);
		printf("stock price : %f", data.per* data.price); 
	}

	return 0;
}