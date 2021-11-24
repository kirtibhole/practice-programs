//Write a program which accept number from user and print even factors of that number. 
// i/p: 36
// o/p:  2  6  12  18

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	
     int iCnt = 0;
	 
	 if(iNo <= 0)
	 {
		 iNo = -iNo;
	 }
	 for(iCnt = 1; iCnt<= iNo/2 ; iCnt++)
	 {
		 if((iNo % iCnt ==0) && (iCnt % 2 ==0))
		 {
			 printf("%d\t",iCnt);
		 }
	 }
	 
}
int main()
{
	int iValue = 0;
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	DisplayEvenFactor(iValue);
	
	return 0;
}