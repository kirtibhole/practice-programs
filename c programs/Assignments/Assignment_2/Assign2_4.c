// Accept two numbers from user and display first number in second number of times.

//Input 12 5
//output 12 12 12 12 12 

//Input -2 3
//Output -2 -2 -2

//Input  21 -3
//Output 21 21 21

//Input -2 0
//output:

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int iCnt = 0;
	
	 // Input updator
    if(iFrequency < 0)             // If the input is negative
    {
        iFrequency = -iFrequency;         // convert that negative number into positive number
    }
    
	for(iCnt = 0;iCnt < iFrequency;iCnt++)
	{
		printf("%d \t",iNo);
	}
}
int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	printf("Enter Frequency:\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}