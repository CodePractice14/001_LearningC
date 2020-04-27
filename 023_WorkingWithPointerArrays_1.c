#include <stdio.h>
#include <ctype.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/

int main(int argc, char **argv)
{
	char *presidents[5] =
	{
		"Washington",
		"Adams",
		"Jefferson",
		"Madison",
		"Monroe"
	};
	
	int x;
	char *ptr;
	
	for(x =0; x<5; x++)
	{
		ptr = presidents[x]; //this is the array notation
		//ptr = *(presidents+x); //this is the pointer notation. Does the same thing..so to each its own.
		
		while(*ptr) //while(*ptr != '\0') the null character is read as false in a while loop
		{
			putchar(*ptr);
			ptr++;
		}
		putchar('\n');
	}
	
	return (0);	
}





