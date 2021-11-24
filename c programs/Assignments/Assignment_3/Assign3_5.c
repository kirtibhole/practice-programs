// Accept on character from user and check whether that character is vowel 
//(a,e,i,o,u) or not. 
//Input : E Output : TRUE 
//Input : d Output : FALSE


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char chValue)
{
	if(chValue == 'a' || chValue == 'e' || chValue == 'i' ||chValue == 'o' || chValue == 'u' ||chValue == 'A' ||chValue == 'E' ||chValue == 'I' ||chValue == 'O' || chValue == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
		
}

int main()
{
	char chChar = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter character:\n");
	scanf("%c",&chChar);
	
	bRet=CheckVowel(chChar);
	
	if(bRet == 1)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not vowel");
	}
		
	
	return 0;
}
