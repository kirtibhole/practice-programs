//output 
//31
//0
//0
//0




#include<stdio.h>

int main()
{
	int no = 31;
	char *p =(char*)&no; 
	
    printf("%d\n",*p);//100
	p++;// 101
	
	printf("%d\n",*p);//101
	p++;
	//102
	printf("%d\n",*p);//102
	p++;//103
	
    printf("%d\n",*p);//103
	
	
	
	return 0;
}