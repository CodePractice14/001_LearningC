#include <stdio.h>
#include <string.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/

char *longer(char *s1, char *s2);

int main(int argc, char **argv)
{
	char string1[] = "Constantinopole";
	char string2[] = "Byzantium";
	char *result;
	
	result = longer(string1, string2);
	printf("String '%s' is longer.\n", result);
	
	return (0);;;
}

char *longer(char *s1, char *s2)
{
	int len1, len2;
	
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	if (len1>len2)
	{
		return(s1);
	}
	else
	{
		return(s2);
	}
}

