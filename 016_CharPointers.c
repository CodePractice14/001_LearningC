#include <stdio.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/


int main()
{
	
	char a, b, c, *p;
	
	a = 'A';		/* assign 'A' to variable a */
	p = &a;			/* set pointer p to the adress of a*/
	b = *p;			/* assign  variable b to the value addressed by pointer p*/	
	p = &c;			/* set pointer p to the address of c */
	*p = 'Z';		/* assign the value addressed by pointer p to 'Z' */
	
	
	printf("%c %c %c", a , b, c);
	
	return(0);
}


