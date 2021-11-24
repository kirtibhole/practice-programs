//Accept one character from user and convert case of that character.

// i/p : a   o/p : A
// i/p : D   o/p : d
#include<stdio.h>

void DisplayConvert(char chValue)
{
	if(chValue >= 96)
	{
		chValue = chValue - 32;
		printf("%c",chValue);
	}
	else if(chValue <= 97)
	{
		chValue = chValue + 32;
		printf("%c",chValue);
	}
}

int main()
{
	
	char cValue = '\0';
	
	printf("Enter the Alphabet:\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}