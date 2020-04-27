#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

/**
 * -- Memory Usage --
 * 
 * 1. Memory is provided by the operating system
 * 2. Your code creates storage for individual variables
 * 3. Your code can create arrays or buffers
 * 4. Your code can request more memory from the operating system as it runs
 * 
 * -- Requesting More Memory --
 * 
 * 1. Use the malloc() function
 * 2. malloc() stands for memory allocation
 * 3. Requires including the stdlib.h header file
 * 
 * -- The malloc() Function -- 
 * 
 * 1. Requires one argument, the size of memory to allocate
 * 2. Returns the address of the chunk of memory allocated
 * 3. Upon an error, the NULL pointer is returned
 * 4. NULL is a constant you can use to represent the NULL pointer
 * 5. The NULL constant is not the same as the null character, \0
 * 
 * -- Memory Size Calculation -- 
 * 
 * 1. Use the sizeof operator to determine how many bytes are used by the data type requested
 * 2. Multiply the result of the sizeof operator by the number of units desired
 * 			malloc(sizeof(int) *100) <--> size needed for array of 100 int 
 * 
 * -- Using the Address malloc() Returns -- 
 * 
 * 1. Ensure that the pointer used with malloc() is of the same data type requested
 * 2. Always test for  the NULL pointer result
 * **/

int main()
{
	char *sto;
	
	sto = malloc(sizeof(char) * SIZE);
	
	if(sto == NULL)
	{
		puts("Memory Error!");
		return (1);
	}
	else
	{
		printf("%d bytes of memory allocated at %p\n", SIZE, sto);
	}
	
	return (0);
}






