#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = 'a';
	
	printf("Original %c\n", ch);
	printf("Lowercase %c\n", tolower(ch));
	printf("Uppercase %c\n", toupper(ch));
	printf("Original %c\n", ch);
	
	/** Capitalise all text **/
	int c;
	
	printf("\nInsert a text and we will capitalise it..\n");
	printf("Your text here: ");
	do
	{
		c = getchar();
		c = toupper(c);
		putchar(c);
	}
	while(c != '\n');
	
	/** Pick only alphabet characters **/
	int acter;
	
	printf("\nInsert a text and we will pick out just what's part of the alphabet for you..\n");
	printf("Your text here: ");
	
	do
	{
		acter = getchar();
		if(isalpha(acter))
		{
			putchar(acter);
		}		
	}
	while(acter != '\n');
	
	/** Pick only digit characters **/
	int anothercter;
	
	printf("\nInsert a text and we will pick out just what's a digit for you..\n");
	printf("Your text here: ");
	
	do
	{
		anothercter = getchar();
		if(isdigit(anothercter))
		{
			putchar(anothercter);
		}		
	}
	while(anothercter != '\n');
	
	return (0);
}
