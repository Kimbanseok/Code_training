//2���� �迭�� ��ȯ������ �ְ�, �Ű������� �޴� ��
//
//�迭�� ��ȯ������ �дٴ°�... �迭�� �ּҰ��� ��ȯ�Ѵٴ� ��. 
//�׷��ٸ� �� �迭�� �ּҰ��� ���������� static ����, �������� �� ������ �Ǿ�� �ϴ°�?
//static �̾�� �Ѵ�. (ȸ���� ������ ���� �ٲ�µ�, ���� �� �� ���� �����ϰ� �־�� �ϴϱ�!)
// 1���� �迭
//��ȯ�� �Լ��̸�(�ڷ��� *�迭�Ű�����)
//��ȯ�� �Լ��̸�(�ڷ��� �迭�Ű�����[])
//# �迭�Ű����� �̸� �ڿ� []�� Ū�⸦ �����ϴ��� ���õȴ� . 
//�迭�Ű�����[] �� �迭�� �޸� �ּҸ� ��� �ִ� �������̴�. �迭�� ũ�⸦ �� �� ����. 

//�迭�Ű������� �������̹Ƿ� �Լ� �ȿ��� �迭�� ��Ҹ� �����ϸ� �Լ� �ٱ��� �ִ� �迭�� ��Ұ� �ٲ�� �ȴ�

// 2���� �迭
// ��ȯ���ڷ��� �Լ��̸�(�ڷ��� �迭�Ű�����[][����ũ��])
// ��ȯ���ڷ��� �Լ��̸�(�ڷ��� (*�迭�Ű�����)[����ũ��])

#include<stdio.h>

int (*func2(int col, int row, int number))[5]
{
	static int arr[5][5] = {0,};

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[i][j] = number;
		}
		number++;
	}
	return arr;
}

void printArray(int(*arr)[5], int col, int row)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}

int (*rotateArray(int(*arr)[5], int col, int row))
{
	int temp[5][5] = { 0, };
	int i, j;

	for (i = 0; i < col; i++ )
	{
		for (j = 0; j < row; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}

	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			arr[i][j] = temp[(row - 1) - j][i];
		}
	}
	printf("====================================\n");
	return arr;
}

int main()
{
	int(*ptr)(int, int, int);
	int col, row, number;
	int (*arr)[5] = {0, };  //�迭 �����͸� ��ȯ���� �迭 ������
	int c=0; 

	printf("pls input the arr_size  : ");
	scanf("%d", &col);

	row = col;

	printf("pls input the number that will be start number in array : ");
	scanf("%d", &number);

	ptr = func2;
	arr = ptr(col, row, number);

	ptr = printArray;
	ptr(arr, col, row);

	//printf("Do you want ratate ?! : Y / N \n");
	//scanf("%c", &c);

	while (c < 2)
	{

		//if(c == 'y' || c== 'Y')
		//{
		ptr = rotateArray;
		arr = ptr(arr, col, row);

		ptr = printArray;
		ptr(arr, col, row);
		//}
		c++;
	}





}