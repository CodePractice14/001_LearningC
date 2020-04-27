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
	int *scores, x;

    scores = malloc(sizeof(int)*4);
		
	if(scores == NULL)
	{
		puts("Unable to alocate memory!");
		return (1);
	}
	
    *(scores + 0) = 100;
    *(scores + 1) = 97;
    *(scores + 2) = 105;
    *(scores + 3) = 110;

    for(x = 0 ;x < 4; x++)
    {
        printf("Score %d: %d\n", x+1, *(scores+x));
    }
    	
	return (0);	
}






