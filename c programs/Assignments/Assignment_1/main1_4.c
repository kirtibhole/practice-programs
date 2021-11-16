#include "Assign1_4.h"
int main()
{
	int iValue =0;
	BOOL bRet = FALSE;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	
	return 0;
}
