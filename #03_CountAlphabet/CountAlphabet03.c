#include <stdio.h>

//main ������ ���ڿ��� �Է� �޴´�. 
//�Է� ���� ���ڿ���countAlpha �Լ��� �Ű������� ����Ѵ�. 


int main()
{
	char input[100] = { '\0', };
	//char *parameter_receive ;
	int h=0; 
	
	printf("Input the Sentence : ");
	scanf("%[^\n]", input);

	countAlpha(input);


	return 0; 
}


int countAlpha(char* input)   //��ȯ�� ���� ���� 'void'������ �Ϸ��µ� ������ ���� int������ �ٲ�.
{
	
	int count = 0;
	int temp;
	int i = 0;
	
	temp = input[0];

	while (input[i]!='\0')
	{
		//printf("while : %d�� \n", i);

		if (temp == input[i])
		{
			count++;

			if (input[i + 1] == '\0')
			{
				printf("%c : %d.", temp, count);
			}
		}

		else
		{
			
			printf("%c : %d, ", temp, count);
			temp = input[i];
			count = 1; 
			
			//printf("temp : %c \n", input[i]);

			if (input[i + 1] == '\0')
			{
				//printf("input[i+1] == null ���� ���Դ�! \n");
				printf("%c : %d.", temp, count);
			}

		}
		i++;
	}

}
