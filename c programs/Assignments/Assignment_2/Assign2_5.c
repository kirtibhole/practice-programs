//Accept number from user and check whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvenOdd(int iNo)
{
	int iResult = 0;
	
	iResult = iNo % 2;
	
	if(iResult == 1)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
}
int main()
{
	int iValue = 0;
    BOOL iAnswer = FALSE;	
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iAnswer = CheckEvenOdd(iValue);
	
	if(iAnswer == 1)
	{
		printf("Number Is Even");
	}
	else
	{
		printf("Number Is Odd");
	}
	
	return 0;
}