/*
Write a program which accept total marks & obtained marks from user and 
calculate percentage. 
 
 Input : 1000 745 
 Output : 74.5%
*/

#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
	float fAns = 0.0;
	
     if(iNo1 == 0 || iNo2 == 0)
	 {
		 return 0;
	 }
	 fAns = (iNo2 *100) / iNo1;
	 
	 return fAns;
	 
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet =0.0;
	
	printf("enter total marks:\n");
	scanf("%d",&iValue1);
	
	printf("enter obtained marks:\n");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1,iValue2);
	
	printf("Your percentage is: %f",fRet);
	
	return 0;
}