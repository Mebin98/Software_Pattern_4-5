#include <stdio.h>

void main()
{
	char crs[] = "named";
	char str[] = "A thief named hong gil dong lived with frineds named hong gil don and hong gil ja in a village named hong gil dong village";
	int i = 0;
	int cursor = 0;
	int cnt = 0;

	while (str[cursor] != '\0')
	{
		if (str[cursor] == crs[i])
		{
			cursor++;
			i++;
		}
		else
		{
			cursor++;
			i = 0;
		}

		if (crs[i] == '\0')
		{
			cnt++;
			i = 0;
		}
	}

	printf("%d", cnt);
	return 0;
}