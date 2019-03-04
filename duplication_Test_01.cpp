#include<stdio.h>
#include<string.h>

int main()
{
	char input[30] = {'\0',}; //처음 생설할 때만 적용가능
	int arr[128] = {0, };

	int k = 0;
	int i = 0;
	int decimal = 0;
	

	while (k < 5)
	{
		memset(arr, 0, sizeof(int)*128); //생성 후 배열 초기화 시

		printf("input : ");
		scanf("%s", input);

		for (i = 0; input[i] != '\0'; i++)
		{
			decimal = input[i]; 
			printf("%d  ", decimal);
			printf("\n");

			if (arr[decimal] == 1)
				printf("This charater is already written!\n"); 
			else
				arr[decimal] = 1;

			printf("arr[%d] : %d \n", decimal, arr[decimal]);

		}

		decimal = 0;
		k++;
	}
}