#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

/** String things to remember:
 * 
 * +The string.h header file defines many string functions:
 * 		strcmp(), strstr() and so on
 * 
 * +Ensure the string sotrage is large enough to hold the string + the null char at the end
 * **/


int main()
{
	char fullname[64];
	char firstname[32];
	char lastname[32];
	
	/* fetch input */
	
	printf("Your first name: ");
	fgets(firstname, 32, stdin);
	printf("Your last name: ");
	fgets(lastname, 32, stdin);
	
	/* process the strings */
	strcpy(fullname, firstname);
	
	/** (Bonus)
	 * 1. Remove the newLine that fgets captures between FIRST and LAST name 
	 * 2. Add a space between the 2 strings
	 * */
	strtok(fullname, "\n");
	strcat(fullname, " ");
		
	strcat(fullname, lastname);
	

	
	/* display results */
	printf("\nGood Day %s", fullname);
		
	return (0);
}

