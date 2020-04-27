#include <stdio.h>

int main(int argc, char **argv)
{
	int array[] = {11, 13, 17, 19};

	int *aptr;
	
	aptr = array; /* no & needed for an array */
	
	printf("The element: %d\n", *(aptr+3));
	
	
	
/*	
 	int x;
	for(x =0; x<4; x++)
	{
		printf("Element %d: %d\n", x+1, *aptr);
		aptr++;
	}
*/	
	
//The same  things as this one
/*
	int x;
	for(x =0; x<4; x++)
	{
		printf("Element %d: %d\n", x+1, array[x]);
	}
*/
	
	return 0;
}

