#include <stdio.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/


int main()
{
	
	/** Pointer exemple 1 **/
	int pokey;
	int *p;
	
	pokey = 900;	
	p = &pokey;
	
	printf("The adress of 'pokey' is %p \n", &pokey);
	printf("The address of 'p' is %p \n", p);
	
	printf("The value of 'pokey' is %d \n", pokey);
	printf("The value of 'p' is %d \n", *p);
	
		
	return(0);
}

