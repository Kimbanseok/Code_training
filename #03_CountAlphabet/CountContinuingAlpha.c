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

