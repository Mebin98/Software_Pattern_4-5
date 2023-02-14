#include <stdio.h>

void main()
{
	struct ok {
		struct ok* lam;
	}s[5];

	for (int i = 0; i < 4; i++)
	{
		s[i].lam = &s[i + 1];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d %d\n", s[i].lam, &s[i]);
	}

	return 0; 
}