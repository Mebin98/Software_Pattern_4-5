#include <stdio.h>
// 정답 : 3

void main()
{
	char src[] = "name*dong";
	char str[] = "My name is hong gil dong. My brother is hong je dong. My sister is hong gilja, and her friend is hongdong.";

	int i = 0;
	int j = 0;
	int cursor = 0;
	int statu = 1; // 1상태 hong, 2상태 dong
	int found = 0; // sub-str 찾은 갯수

	while (str[cursor] != '\0')
	{
		if (str[cursor] == src[i])
		{
			i++;
			cursor++;
		}
		else
		{
			i = 0;
			cursor++;
		}

		if (src[i] == '*')
		{
			statu = 2; // hong -> dong
			i++; // * 다음으로 index 늘려 str 비교 (4->5)
			j = i;
			i--; // j = 5, i = 4 
		}

		while(statu == 2) // hong*dong안에 무엇이든 가능한 알고리즘, 어떤 문자열을 넣어도 되도록 하는 알고리즘
			// hong 발견하고 또 hong 나오면 초기화하는 알고리즘
		{
			if (str[cursor] == src[j])
			{
				j++;
				cursor++;
			}
			else
			{
				if (str[cursor] != src[j])
				{
					for (int k = 0; k = i; k++) // 홍홍 방지 loop
					{
						if (src[k] == str[cursor])
						{
							cursor++;
						}
						else
						{
							cursor++;
							break;
						}
						if (k == i)
						{
							statu = 1;
							i = 0;
							j = 0;
						}
					}
				}
				else
				{
					cursor++;
				}
			}
			if (src[j] == '\0')
			{
				found++;
				statu = 1;
				j = 0;
				i = 0;
			}
			
	
		}
	}
	printf("Number of Partial String : %d", found);

	
	return 0;
}