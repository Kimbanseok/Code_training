#include<stdio.h>
#include<string.h>


//�Է¹��� ���ڿ�(�迭)�� �ƽ�Ű ������ ��ȯ�Ͽ� ��ȯ�Ѵ�. 
//main �Լ��� int�� �迭�� �ּҰ��� ��ȯ�ϱ� ���� ������� �Լ���, �����͸� ��ȯ�ϱ� ���ؼ� malloc �Լ��� �޸�
//�� �Ҵ��� �� ��ȯ�ؾ� �Ѵ�. (input_sentence������ ���������� input_sentence������ ��밡��)

//pointer �̸��� '����'�̰�, array �̸��� '���' �̴�. 


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

	temp = ptrSentence[0];  //count�� temp�� �ʱ�ȭ �ϴ� init() ����� ���ڴ�. 

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
			else if (temp != ptrSentence[i])    //���ǽ��� ���������� '=!'�� �� ���� ���� ã�Ҵ�...'!='�� �´� ��. �������
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

	int *stringToAsc = malloc(sizeof(int));  //count ũ��� ���� �迭�� ����� ����� �����ϱ�?

	for (i = 0; i != '\0'; i++)
	{
		stringToAsc[i] = arr[i];
	}

	return stringToAsc;  //�Լ� input_sentence������ ����� �� �ִ� '��������'�� ��ȯ�ϴ� ���� ���� �߻�.
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
	scanf("%s", input_alpha); //���⵵ �Է� �Ǵ� ���ΰ�?

	length = sizeof(input_alpha);

	translatedInput = input_sentence(input_alpha); //�� �Լ��� output�� ��� Ȱ������?

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