#include <stdio.h>
// ���� : 3

void main()
{
	char src[] = "name*dong";
	char str[] = "My name is hong gil dong. My brother is hong je dong. My sister is hong gilja, and her friend is hongdong.";

	int i = 0;
	int j = 0;
	int cursor = 0;
	int statu = 1; // 1���� hong, 2���� dong
	int found = 0; // sub-str ã�� ����

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
			i++; // * �������� index �÷� str �� (4->5)
			j = i;
			i--; // j = 5, i = 4 
		}

		while(statu == 2) // hong*dong�ȿ� �����̵� ������ �˰���, � ���ڿ��� �־ �ǵ��� �ϴ� �˰���
			// hong �߰��ϰ� �� hong ������ �ʱ�ȭ�ϴ� �˰���
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
					for (int k = 0; k = i; k++) // ȫȫ ���� loop
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