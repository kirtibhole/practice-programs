/*

Write a program which accept number from user and return summation of all its 
non factors. 

Input : 12 
Output : 50 

Input : 10 
Output : 37

*/

#include<stdio.h>

int NonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1;iCnt < iNo;iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;
			
		}
	}
	return iSum;
}

int main()
{
	int iValue =0;
	int iRet = 0;
	
	
	printf("enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = NonFact(iValue);
	
	printf("Summation is :%d",iRet);
	
	return 0;
}