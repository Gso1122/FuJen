#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

void  function1(int n1);
void random();

int main() {

	int choose, number;

	printf("請選擇想要使用的功能(1.階層數列 2.一維矩陣):");
	scanf("%d", &choose);

	switch (choose)
	{
	case 1:
		printf("請輸入開始的階層數值(0~6)：");
		scanf("%d", &number);
		function1(number);
		break;
	case 2:
		printf("------arr[30]------\n");
		random();
		break;
	}
	system("pause");
	return 0;
}
void function1(int n1)
{
	int i = 1, ans = 1, old, arr[15];
	for (; i < n1 + 8; i++)
	{
		old = ans;
		ans = old * (i + 1);
		arr[i - 1] = ans;
		if (i > n1-2)
			printf("arr[%d]  =  %d!  =%d\n\n", i - n1+1, i+1 , ans);
	}
}
void random()
{
	int i, num = 0, shift = 50, range = 101, arr[50] = { 0 }, j = 0;
	int a, b, temp;
	srand(time(NULL));
	for (i = 0; i < 30;i++)
	{
		num = shift + rand() % range;
		arr[i] = num;
		printf("%d\t", num);
		if ((i+1) % 6 == 0 )
			printf("\n");
	}
	for (i = 0; i < 30; ++i)
		for (j = 0; j < 30 - i; ++j)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	printf("---min[5]----\n");
	for (i = 1; i < 6; ++i)
		printf("%d ", arr[i]);
}