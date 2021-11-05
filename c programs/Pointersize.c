#include<stdio.h>

int main()
{
	//char *pPtr1,pPtr2;
	//printf("%ld%ld",sizeof(pPtr1),sizeof(pPtr2)); ans :- 4 1
	//printf("%d%d%d%ld",sizeof(char*),sizeof(int*),sizeof(float*),sizeof(double*)); ans :- 4 4 4 4
	
	char far *pPtr1;//,near*pPtr2,huge*pPtr3; error
	printf("%d",sizeof(pPtr1));	//,sizeof(pPtr2),sizeof(pPtr3)   error
	
}
 