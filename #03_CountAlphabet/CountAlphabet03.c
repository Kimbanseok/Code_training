#include <stdio.h>

//main 에서는 문자열을 입력 받는다. 
//입력 받은 문자열을countAlpha 함수의 매개변수로 사용한다. 


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


int countAlpha(char* input)   //반환할 값이 없인 'void'형으로 하려는데 오류가 나서 int형으로 바꿈.
{
	
	int count = 0;
	int temp;
	int i = 0;
	
	temp = input[0];

	while (input[i]!='\0')
	{
		//printf("while : %d번 \n", i);

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
				//printf("input[i+1] == null 조건 들어왔다! \n");
				printf("%c : %d.", temp, count);
			}

		}
		i++;
	}

}
