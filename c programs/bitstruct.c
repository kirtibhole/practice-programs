#include<stdio.h>

#pragma pack(1)
struct Date
{
	unsigned int Day :5;
	unsigned int month :4;
	unsigned int year : 15;
};
int main()
{
	struct Date obj;
	int i,j,k;

	
	printf("enter day\n");
	scanf("%d",&i);
	obj.Day=i;
	
	printf("Enter Month\n");
	scanf("%d",&j);
	obj.month=j;
	
	printf("Enter year\n");
	scanf("%d",&k);
	obj.year=k;
	
	printf("%d/%d/%d\n",obj.Day,obj.month,obj.year);
	
	return 0;
}