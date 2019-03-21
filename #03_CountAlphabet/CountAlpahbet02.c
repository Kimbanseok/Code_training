#include<stdio.h>
#include<string.h>

int main()
{
	char input_alpha[30] = { '\0', };
	
	int i = 0, j = 0;
	int count = 0; //ascll value
	char temp; 

	//memset(arr, 0, sizeof(int) * 128);

	printf("input : ");
	scanf("%s", input_alpha);

	printf("received input : %s \n", input_alpha);

	while (input_alpha[i] != '\0')
	{
		temp = input_alpha[j];

		if (input_alpha[i] == temp)
		{
			count++;
		}

		else if (input_alpha[i] != temp || input_alpha[i+1]=='\n')
		{
			printf("%c : %d\n", temp, count);
			j = i;
			count = 1;
		}


		i++;
	}
	i = 0;
	j = 0;


}