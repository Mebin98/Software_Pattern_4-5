#include <stdio.h>

void main()
{
	char search[13] = "hong*dong";
	char str[500] = "My name is hong gil dong. My brother is hong je dong. My sister is hong gilja, and her friend is hongdong.";

	int i, j;
	int partial = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == 'h') && (str[i + 1] == 'o') && (str[i + 2] == 'n') && (str[i + 3] == 'g'))
		{
			for (j = i + 4; str[i] != '\0'; j++)
			{
				
				if ((str[j] == 'd') && (str[j + 1] == 'o') && (str[j + 2] == 'n') && (str[j + 3] == 'g'))
				{
					partial += 1;
					break;
				}
				else if ((str[j] == 'h') && (str[j + 1] == 'o') && (str[j + 2] == 'n') && (str[j + 3] == 'g'))
				{
					break;
				}
			}
		}
	}

	printf("%d", partial);
	return 0;
}