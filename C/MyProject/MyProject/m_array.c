/*
#include <stdio.h>

int main(void)
{
	/*
	//다차원 배열 Multidimensional Array

	int i; // □ // 한개의 공간을 가짐
	int arr[5]; // □□□□□ // 5개의 공간을 가짐 arr[0], arr[1], arr[2], arr[3], arr[4]
	int arr2[2][5]; // 뒤에서부터 읽어옴. 5개의 공간을 가진, 2개의 공간
	// □□□□□ arr2[0][0], arr2[0][1], arr2[0][2], arr2[0][3], arr2,[0][4]
	// □□□□□ arr2[1][0], arr2[1][1], arr2[1][2], arr2[1][3], arr2,[1][4]

	int arr3[4][2];
	// □□
	// □□
	// □□
	// □□

	int arr4[3][3][3]; // 3차원 배열 3x3x3 = 27개
	// □□□
	// □□□
	// □□□

	// □□□
	// □□□
	// □□□

	// □□□
	// □□□
	// □□□

	int arr[5] = { 1,2,3,4,5 };
	int arr2[2][5] = {
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 }
	};
	int arr3[4][2] = { {1,2}, {1,2}, {1,2}, {1,2} };
	int arr4[3][3][3] = {
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		}
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("2차원배열 (%d, %d)의 값 : %d\n", i, j, arr2[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3차원배열 (%d, %d, %d)의 값 : %d\n", i, j, k, arr4[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
*/