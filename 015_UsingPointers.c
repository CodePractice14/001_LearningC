#include <stdio.h>

/**
 * 1. Pointers use the * operator when declared
 * 2. When used with the * operator, the pointer represents the value at its address
 * 3. When used without the * operator, the pointer represents an address
 * **/


int main()
{
	
	/** Pointer exemple 2 **/
	int a, b;
	int *ptr;
	
	a = 1234;	
	ptr = &a; //assign the addres of a to pointer ptr
	b = *ptr; //assign the value found at the address of ptr to b
	
	printf("A is %d and B is %d \n", a, b);




	/** Pointer exemple 3 **/

	int c, d;
	int *pointer;
	
	pointer = &c;
	*pointer = 1000;
	pointer = &d;	
	*pointer = 4500;
		
	printf("C is %d and D is %d \n", c, d);
	
	return(0);
}


