//Complete below code snippets it contains only service provider function. 
//Write entry point function to call below helper functions separately. 


//1.Write a program which accept one number from user and print that number of even numbers on screen. 

//Input : 7 
//Output: 2 4 6 8 10 12 14

#include<stdio.h>
void PrintEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo <= 0)
	{
		return;
	}
	while(iCnt <= iNo)
	{
		if(iCnt % 2 == 0)
		{
			iNo = iNo + 1;
			printf("%d\t",iCnt);
		}
		iCnt++;
	}
}


int main()
{
	int iValue = 0;
	
	printf("enter the number:\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
		
	return 0;
}