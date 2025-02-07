#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct member
{
	int number;
	char name[256];
	float kg;
	float tall;
	float bmi;
}bmi[8];

int main()
{
	int i = 0, s = 0;
	printf("請輸入學生健檢資料：\n");
	while (i<8)
	{
		printf("請輸入座號(輸入-1時停止)：");
		scanf("%d", &bmi[i].number);
		if (bmi[i].number == -1)
			break;
		printf("請輸入姓名 :");
		scanf("%s", bmi[i].name);
		printf("請輸入身高(公尺) : ");
		scanf("%f", &bmi[i].tall);
		printf("請輸入體重(公斤) : ");
		scanf("%f", &bmi[i].kg);
		bmi[i].bmi = bmi[i].kg / (bmi[i].tall * bmi[i].tall);
		i++;
	}
	for (i = 0; bmi[i].number != 0, i < 8; i++) {
		if (bmi[i].number == -1)
			break;
		printf("座號\t姓名\t身高\t體重\tBMI\n");
		printf("%d\t%s\t%.2f\t%.2f\t%.2f\n", bmi[i].number, bmi[i].name, bmi[i].tall, bmi[i].kg, bmi[i].bmi);
	}
	while (1) {
		printf("請輸入要查詢座號(輸入-1時離開)：");
		scanf("%d", &s);
		if (s == -1)
			break;
		else 
		{
			for (int j = 0; j < 8; j++)
			{
				if (bmi[j].number == s)
				{
					printf("座號\t姓名\t身高\t體重\tBMI\n");
					printf("%d\t%s\t%.1f\t%.1f\t%.1f\n", bmi[j].number, bmi[j].name, bmi[j].tall, bmi[j].kg, bmi[j].bmi);
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}