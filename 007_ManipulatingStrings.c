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
	/** Compute the lenght of a string using len **/
	char string[] = "Just how long am I?";
	int len;
	
	len = strlen(string);
	printf("The following string:\n");
	puts(string);
	printf("is %d characters long.\n\n", len);
	
		
	/** Compute number of chars inserted **/
	char input[64]; /*63 characters plus null */
	int lenght;
	
	printf("Write some instrunctions here: ");
	
	/*fgets:
	 *  gets the input and stores it in "input",
	 *  reads up to 64 chars,
	 *  stdin [standard input] is the source of the chars */
	fgets(input, 64, stdin);
	lenght = strlen(input);
	printf("You typed %d characters of instructions.\n\n", lenght);
	
	
		
	/** Combine some strings **/
	/* Building a string in C
	 * 1. Create a char buffer (array) large enough to hold the new string
	 * 2. Copy the first string into the char buffer
	 * 3. Append or concatenate, the second string onto the first string in the char buffer.
	 * */
	 
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";
	char buffer[50]; //step 1
	
	strcpy(buffer, first); // step 2
	strcat(buffer, second); //step 3
	puts(buffer);
	
	
	return (0);
}
