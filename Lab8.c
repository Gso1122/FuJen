#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	struct Table
	{
		int number;
		int sex;
		int old;
		float height;
		float weight;
		float BMI;
		int speed;
	};

	srand(time(NULL));
	int choose = 0, n = 0;

	struct Table EE[5];

	printf("歡迎使用電子病歷表\n");

	for (int i = 0; i < 5; i++)
	{
		EE[i].number = i + 1;
		EE[i].sex = rand() % 2;
		EE[i].old = 10 + rand() % 71;
		EE[i].height = 150 + rand() % 31;
		EE[i].weight = 40 + rand() % 60;

		EE[i].BMI = EE[i].weight / ((EE[i].height / 100)*(EE[i].height / 100));
	}
	do {
		printf("請輸入要使用的功能(1. 顯示所有病歷資料 2. 診斷病患 3. 離開系統)：");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("編號\t性別\t年齡\t身高\t體重\tBMI\t心律\t目前情況\n");
			for (int i = 0; i < 5; i++)
			{
				printf("FJU00%d\t", EE[i].number);
				if (EE[i].sex == 1)
					printf("female\t");
				else if (EE[i].sex == 0)
					printf("male\t");

				printf("%d\t%.2f\t%.2f\t", EE[i].old, EE[i].height, EE[i].weight);
				if (EE[i].BMI >= 0 && EE[i].speed >= 0)
				{
					printf("%.2f\t%d\t", EE[i].BMI, EE[i].speed);
					if (EE[i].speed >= 85 || EE[i].BMI >= 30)
						printf("bad");
					else
						printf("good");

				}
				printf("\n");
			}
			break;
		case 2:
			printf("請輸入要診斷的病患編號：FJU00");
			scanf("%d", &n);
			printf("請輸入該病患的心率：");
			scanf("%d", &EE[n - 1].speed);

			printf("編號\t性別\t年齡\t身高\t體重\tBMI\t心律\t目前情況\n");
			printf("FJU00%d\t", EE[n-1].number);
			if (EE[n-1].sex == 1)
				printf("female\t");
			else if (EE[n-1].sex == 0)
				printf("male\t");
			printf("%d\t%.2f\t%.2f\t%.2f\t%d\t", EE[n - 1].old, EE[n - 1].height, EE[n - 1].weight, EE[n - 1].BMI, EE[n - 1].speed);
			if (EE[n - 1].speed >= 85 || EE[n - 1].BMI >= 30)
				printf("bad\n");
			else
				printf("good\n");
		case 3:
			break;
		}
		
	} while (choose != 3);
	
	system("pause");
	return 0;
}