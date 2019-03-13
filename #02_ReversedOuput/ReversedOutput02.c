#include<stdio.h>
#include<string.h>

int main()
{
	char input_arr[30] = { 0, };
	int count = 0;
	int i = 0;
	char temp;

	while (1)
	{
		memset(input_arr, 0, sizeof(char) * 30);

		printf("================================\n");
		printf("Q or q = end\n");

		printf("Pls write word that you want : ");
		scanf("%s", input_arr);

		if (input_arr[0] == 'q' || input_arr[0] == 'Q')
			break;

		printf("input : %s\n", input_arr);

		count = strlen(input_arr);
		printf("count : %d\n", count);
		if (count % 2 == 0)
		{
			for (i = count / 2; i > 0; i--)
			{
				temp = input_arr[(count - ((i)+(count / 2)))];
				input_arr[count - ((i)+(count / 2))] = input_arr[count - ((count / 2) - (i - 1))];
				input_arr[count - ((count / 2) - (i - 1))] = temp;
				//printf("%c ", input_arr[i]);
			}
		}
		else
		{
			for (i = count / 2; i > 0; i--)
			{
				temp = input_arr[(count - ((i+1)+(count / 2)))];
				input_arr[count - ((i+1)+(count / 2))] = input_arr[count - ((count / 2) - (i - 1))];
				input_arr[count - ((count / 2) - (i - 1))] = temp;
				//printf("%c ", input_arr[i]);
			}
		}

		printf("%s\n",input_arr);
		count = 0;
	}

	printf("Bye~!\n");
}