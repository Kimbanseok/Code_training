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

