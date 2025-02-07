#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()//main function
{
	float A, B;
	float *ptrA = &A, *ptrB = &B;
	float Result;
	float *ptrResult = &Result;

	while (1)//loop
	{
		printf("Please input which one you want to use?\n1.* 2./ :");//choose * or /
		scanf("%f", &*ptrResult);

		if (*ptrResult == 2)         //the rule of /
		{
			printf("Please input two fioat number:\n");//input number
			scanf("%f", &*ptrA);
			scanf("%f", &*ptrB);

			*ptrResult = *ptrA / *ptrB;

			printf("A's value is %.2f, A's address is %p\n", *ptrA, &*ptrA);//print the value
			printf("B's value is %.2f, B's address is %p\n", *ptrB, &*ptrB);
			printf("*ptrA's value is %.2f, *ptrA's address is %p\n", *ptrA, &*ptrA);
			printf("*ptrB's value is %.2f, *ptrB's address is %p\n", *ptrB, &*ptrB);
			printf("Result's value is %.2f, Result's address is %p\n", *ptrResult, &*ptrResult);
			printf("*ptrResult's value is %.2f, *ptrResult's address is %p\n\n", *ptrResult, &*ptrResult);
		}
		else if (*ptrResult == 1)              //the rule of *
		{
			printf("Please input two fioat number:\n");//input number
			scanf("%f", &*ptrA);
			scanf("%f", &*ptrB);

			*ptrResult = *ptrA * *ptrB;

			printf("A's value is %.2f, A's address is %p\n", *ptrA, &*ptrA);//print the value
			printf("B's value is %.2f, B's address is %p\n", *ptrB, &*ptrB);
			printf("*ptrA's value is %.2f, *ptrA's address is %p\n", *ptrA, &*ptrA);
			printf("*ptrB's value is %.2f, *ptrB's address is %p\n", *ptrB, &*ptrB);
			printf("Result's value is %.2f, Result's address is %p\n", *ptrResult, &*ptrResult);
			printf("*ptrResult's value is %.2f, *ptrResult's address is %p\n\n", *ptrResult, &*ptrResult);
		}
		else if (*ptrResult == -1)        //break the loop
			break;
	}
	printf("Program End!!!!!!!!!!!!\n");

	system("pause");
	return 0;
}