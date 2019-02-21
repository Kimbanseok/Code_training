#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int idx = 0;
	int j = 0;
	int a=0; 
	int count =0;

	while (count<5)
	{
		printf("Input sentece :	");
		scanf("%s", str);

		printf("Input sentence : %s \n", str);

		for (idx = 0; str[idx] != '\0'; idx++)
		{
			for (j = 0; str[j] != '\0'; j++)
			{

				if (str[j] == str[idx])
				{
					if (idx != j)
						a += 1;
				}

			}

			//printf("%c", str[idx]);
		}

		printf("==========================================\n");
		if (a > 0)
			printf("Depulication exist \n");
		else
			printf("Depulication not exist\n");

		printf("==========================================\n");

	}


}

//띄어쓰기 한 공백을 문장 끝으로 인식한다. 