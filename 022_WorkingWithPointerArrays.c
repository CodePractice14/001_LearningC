#include <stdio.h>
#include <ctype.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/

int main(int argc, char **argv)
{
	char *months[12] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	
	int x;
	
	for(x =0; x<12; x++)
	{
		printf("%p\n", months[x]);
	}
	
	return (0);	
}




