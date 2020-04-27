#include <stdio.h>


int main()
{
	
	/** Exemple of a Multidimensional int array **/
	int grid[3][3];
	int row, col;
	
	/* Initialise the array */
	for(row =0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			grid[row][col] = 0;
		}
	}
	
	grid[1][1] = 1; //remeber the array starts from 0
	
	/* Display the array */	
	for(row =0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("%d ", grid[row][col]);
		}
		putchar('\n');
	}
	
	
	/** Exemple of a Multidimensional char array **/
	
	/* 4 = number of elements inside the array
	 * 5 = number of maximum characters of each element (remeber null character)
	 * */
	char names[4][5] = 
	{
		"Ant",
		"Bee",
		"Cat",
		"Duck"
	};
	
	int x;
	
	names[2][2] = 'r';
	//names[3][0] = 'F'; // LOL
	
	for(x =0; x<4; x++)
	{
		printf("%s\n", names[x]);
	}
	
	return (0);
}
