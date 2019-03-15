#include<stdio.h>
#include<string.h>

int main()
{
	char input[30] = { '\0', }; //처음 생설할 때만 적용가능
	int arr[128] = { 0, };
	int i = 0, j = 0;
	int a_v = 0; //ascll value

	int num = 65;

	memset(arr, 0, sizeof(int) * 128);

	printf("input : ");
	scanf("%s", input);

	printf("input : %s \n", input);

	for (i = 0; input[i] != '\0'; i++)
	{
		a_v = input[i];

		arr[a_v]++;
	}


	for (j = 0; j < 128; j++)
	{
		if (arr[j] != 0)
			printf("%c : %d  ", j, arr[j]);
	}

}