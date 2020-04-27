#include <stdio.h>
#include <ctype.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/

char *encrypt(char *input);

int main(int argc, char **argv)
{
	char *instructions = "Deliver the package to Berlin";
	
	printf("Here are your secret instrunctions :\n%s\n", encrypt(instructions));
		
	return (0);;;
}

char *encrypt(char *input)
{
	static char output[64]; //If this isn't static, it will be lost when function ends
	int x =0;
	
	while (*input)
	{
		if(isalpha(*input))
		{
			output[x] = *input +1;
		}
		else
		{
			output[x] = *input;
		}
		x++;
		input++;
	}
	
	return(output);
}



