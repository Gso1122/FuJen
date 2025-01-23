#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int function1(int);//function prototype
int function2(int);
int function3(int);

void main() {     //main function
	int n , n1, choise;
	printf("1.  1+2+...+n\n");
	printf("2.  1-2+3-4+...+n\n");
	printf("3.  x!+(x+1)!+...+y!\n\n\n");
	printf("input your choice:");
	scanf("%d", &choise);     //input your choise

	if (choise == 1) {                     //choise one
		printf("input  'n'  :");
		scanf("%d", &n);                //input number
		n = function1(n);              //call function
	}
	else if (choise == 2) {           //choise two
		printf("input  'n'  :");
		scanf("%d", &n);              //input number
		n=function2(n);              //call function
	}
	else if (choise == 3){          //choise three
		printf("input  'x'and'y'  :");
		scanf("%d%d", &n, &n1);//input number
		while (n1 >= n)
		{
			n += function3(n1);              //call function
			n1--;
		}
	};
	printf("\n\n\nans is�G%d\n\n", n);   //answer

	system("pause");                //end main function
}
int function1(int n1)            //function defination
{
	if (n1 > 1)
		return  (n1 + function1(n1 - 1));
	else
		return 1;
}
int function2(int n2)            //function defination
{
	int o = n2 % 2;
	if (o == 1 && n2 != 1)
		return (n2 + function2(n2 - 1));
	else if (o == 0 && n2 != 1)
		return (-n2 + function2(n2 - 1));
	else
		return 1;
}
int function3(int n3)            //function defination
{
	if (n3 > 0)
		return (n3 * function3(n3 - 1));
	else
		return 1;
}
