//2차원 배열을 반환값으로 주고, 매개변수로 받는 법
//
//배열을 반환값으로 둔다는건... 배열의 주소값을 반환한다는 것. 
//그렇다면 그 배열의 주소값이 지역변수와 static 변수, 전역변수 중 무엇이 되어야 하는가?
//static 이어야 한다. (회전할 때마다 값이 바뀌는데, 변경 된 그 값을 유지하고 있어야 하니깐!)
// 1차원 배열
//반환형 함수이름(자료형 *배열매개변수)
//반환형 함수이름(자료형 배열매개변수[])
//# 배열매개변수 이름 뒤에 []에 큭기를 지정하더라도 무시된다 . 
//배열매개변수[] 는 배열의 메모리 주소를 담고 있는 포인터이다. 배열의 크기를 알 수 없다. 

//배열매개변수는 포인터이므로 함수 안에서 배열의 요소를 변경하면 함수 바깥에 있는 배열의 요소가 바뀌게 된다

// 2차원 배열
// 반환값자료형 함수이름(자료형 배열매개변수[][가로크기])
// 반환값자료형 함수이름(자료형 (*배열매개변수)[가로크기])

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
	int (*arr)[5] = {0, };  //배열 포인터를 반환받을 배열 포인터
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