#include<stdio.h>
#include<string.h>

int main()
{
	char input_arr[30] = { 0, };
	int count = 0;
	int i = 0;

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

		for (i = count - 1; i >= 0; i--)
		{
			printf("%c ", input_arr[i]);
		}
		printf("\n");
		count = 0;
	}

	printf("Bye~!\n");
}