/*
Write a program which accept two numbers and check whether numbers are 
equal or not. 
  Input : 10 10 
  Output : Equal 
 
  Input : 10 12
  Output : Not Equal
  
  Input : 10 -10 
  Output : Not Equal
 */
 
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1,int iNo2)
{
	if(iNo1 == iNo2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue1,iValue2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	bRet = CheckEqual(iValue1,iValue2);
	
	if(bRet == TRUE)
	{
		printf("EQUAL");
	}
	else
	{
		printf("NOT EQUAL");
	}
	
	return 0;
}