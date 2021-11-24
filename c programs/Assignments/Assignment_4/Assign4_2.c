//Write a program which accept number from user and display its factors in decreasing order.

// I/p : 12 
// O/p : 6 4 3 2 1

// I/p : 13
// o/p : 1

// I/p : 10
// O/p  :5 2 1

 #include<stdio.h>
 
 void FactRev(int iNo)
 {
	 int iCnt = 1;
	 
	  for(iCnt = iNo/2; iCnt >= 1 ; iCnt--)  
	 {
		 if(iNo % iCnt == 0)
		 {
			 printf("%d \t",iCnt);
		 }
	 }
 }
 
 int main()
 {
	 int iValue = 0;
	 
	 printf("Enter the value:\n");
	 scanf("%d",&iValue);
	 
	 FactRev(iValue);
	 
	 return 0;
 }