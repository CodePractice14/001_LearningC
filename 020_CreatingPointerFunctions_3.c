#include <stdio.h>
#include <ctype.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/

void shouting(char *input);

int main(int argc, char **argv)
{
	char string[64];
	
	printf("Type some text: ");
	fgets(string, 64, stdin);
	printf("You typed: \n%s\n", string);
	shouting(string);
	printf("If you were shouting, you'd type:\n%s\n", string);
	
	return (0);;;
}

void shouting(char *input)
{
	while (*input)
	{
		*input = toupper(*input);
		input++;
	}
}



