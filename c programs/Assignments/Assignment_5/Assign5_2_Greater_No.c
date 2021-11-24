/*Write a program which accept one number from user and check whether that number is greater than 100 or not. 

 Input : 101 
 Output : Greater 
 
 Input : 39 
 Output : Smaller

*/

#include<stdio.h>
#include<stdbool.h>

/*typedef int BOOL;
#define TRUE 1
#define FALSE 0
*/
bool CheckGreater(int iNo)
{
	if(iNo > 100)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	int iValue = 0;
    bool bRet = false;
	
	printf("Enter The Number:");
	scanf("%d",&iValue);
	
	bRet = CheckGreater(iValue);
	
	if(bRet == true)
	{
		printf("Greater");
	}
	else
	{
		printf("Smaller");
	}
		
	return 0;
}