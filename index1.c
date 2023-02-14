#include <stdio.h>
#include <string.h>

void main()
{
	struct dataset {
		char name[20];
		int age;
		char hobby[20];
	};

	struct dataset name[5] = {
		{"kim",39,"tennis"},
		{"ko",15,"soccer"},
		{"lee",17,"soccer"},
		{"choi",21,"tennis"},
		{"park", 10, "tennis"}
	};

	struct index {
		char key[20];
		struct dataset* address;
	};

	struct index myindex[5] =
	{
		{"kim",&name[0]},
		{"ko", &name[1]},
		{"lee", &name[2]},
		{"choi", &name[3]},
		{"park", &name[4]}
	};


	for (int i = 0; i < 5; i++)
	{
		if ((strcmp(myindex[i].key, "lee") == 0) || (strcmp(myindex[i].key, "park"))==0)
		{
			printf("name : %s, age : %d, hobby : %s\n", myindex[i].address->name, myindex[i].address->age, myindex[i].address->hobby);
		}
 	}


	return 0;
}