#include<stdio.h>
#include<string.h>


//입력받은 문자열(배열)을 아스키 값으로 변환하여 반환한다. 
//main 함수에 int형 배열의 주소값을 반환하기 위해 만들어진 함수는, 포인터를 반환하기 위해서 malloc 함수로 메모리
//를 할당한 뒤 반환해야 한다. (input_sentence에서의 지역변수는 input_sentence에서만 사용가능)

//pointer 이름은 '변수'이고, array 이름은 '상수' 이다. 


int main()   // inputCount(char *arr)
{
	//char *ptrSentence = malloc(100);
	char *ptrSentence;
	char arr[100] = { '\0', };

	int i = 0;
	int count = 0;
	int temp;

	printf("input the name : ");
	scanf("%[^\n]", arr);

	ptrSentence = arr;

	temp = ptrSentence[0];  //count와 temp값 초기화 하는 init() 만들면 좋겠다. 

	while (ptrSentence[i] != '\0')
	{
		printf("while() sentence test && i =%d \n", i);

		if (ptrSentence[i + 1] == '\0')
		{
			//printf("ptrSentence [i+1] if sentence test_01\n");
			if (temp == ptrSentence[i])
			{
				printf("ptrSentence [i+1] if sentence test_01_01\n");
				count++;
				printf("%c : %d\n", temp, count);
			}
			else if (temp != ptrSentence[i])    //조건식의 같지않음을 '=!'로 쓴 것을 한참 찾았다...'!='가 맞는 것. 기억하자
			{
				printf("ptrSentence [i+1] if sentence test_01-02\n");
				printf("%c : %d\n", temp, count);
				temp = ptrSentence[i];
				count = 1;

				printf("%c : %d\n", temp, count);
			}
		}

		else
		{
			//printf("ptrSentence [i] if sentence test_02\n");
			if (temp == ptrSentence[i])
			{
				printf("ptrSentence [i] if sentence test_02_01\n");
				count++;
			}

			else //if (temp != ptrSentence[i])
			{
				printf("ptrSentence [i] if sentence test_02_02\n");
				printf("%c : %d \n", temp, count);
				count = 1;
				temp = ptrSentence[i];
			}
		}
		i++;
	}

}


/*
int main()
{
	char arr[100] = {'\0', };
	int i = 0;
	char *ptr;
	int temp;

	printf("input the name : ");
	scanf("%[^\n]", arr);

	ptr = arr;

	temp = ptr[0];

	printf("temp : %d\n", temp);

	while (ptr[i] != '\0')
	{
		printf("input name : %d\n", ptr[i]);
		i++;
	}

	return 0;
}

*/
/*
int *input_sentence(char *arr)
{
	int i = 0;

	int *stringToAsc = malloc(sizeof(int));  //count 크기와 같은 배열을 만드는 방법은 무엇일까?

	for (i = 0; i != '\0'; i++)
	{
		stringToAsc[i] = arr[i];
	}

	return stringToAsc;  //함수 input_sentence에서만 사용할 수 있는 '지역변수'를 반환하는 것은 오류 발생.
}
*/
/*
int main()
{
	char input_alpha[100] = { '\0', };
	int *translatedInput;
	int length = 0;
	int i = 0;

	printf("pls input the sentence :  ");
	scanf("%s", input_alpha); //띄어쓰기도 입력 되는 것인가?

	length = sizeof(input_alpha);

	translatedInput = input_sentence(input_alpha); //이 함수의 output을 어떻게 활용하지?

	for (i = 0; translatedInput[i]!='\0'; i++)
	{
		printf("%d  ", translatedInput[i]);
	}

	return 0;

}

*/

/*
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
*/