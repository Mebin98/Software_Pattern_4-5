#include <stdio.h>

void main()
{
	char search[13] = "hong gil dong";
	char str[500] = "A thief named hong gil dong lived with frineds named hong gil don and hong gil ja in a village named hong gil dong village";

	int cnt = 0;
	int i,j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'h')
		{
			for (j = 1; j < 13; j++)
			{
				if (str[i + j] == search[j])
				{
					
				}
				else
				{
					break;
				}
				
				if (j == 12)
				{
					cnt += 1;
				}
			}
		}
	}

	
	printf("%d\n" ,cnt);

	return 0;
}