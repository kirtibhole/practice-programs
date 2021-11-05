/*
//Local variable of auto storage 
#include<stdio.h>

int main()
{
  auto int a=10;
  printf("value of a%d\n",a);//10
}

*/


//global variable of auto storage
#include<stdio.h>
auto int a;//compilation error auto is not allowed.
int a;// allowed

int main()
{
	printf("value of a");
	scanf("%d",&a);
	printf("Entered value is%d",a);
}