//Write a program which accept number from user and display its multiplication of factors.


/*
I/p : 12 
o/p : 144  (1*2*3*4*6)

I/p : 13
o/p : 1    (1)

I/p : 10
o/p : 10   (1*2*5)
*/


#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 1;iCnt <= iNo/2 ; iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet   = 0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("Factor Multiplication is: %d",iRet);
	
	return 0;
}




