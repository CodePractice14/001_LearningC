#include <stdio.h>

int iscaps(int ch);
int isnotcaps(int ch);

int main()
{
		
	/** Evaluate all characters and print the ones in UpperCase **/
	int chupper;
	
	printf("\nInsert a text and we will pick out the UPPER chars..\n");
	printf("Your text here: ");
	do
	{
		chupper = getchar();
		if(iscaps(chupper))
		{
			putchar(chupper);	
		}	
	}
	while(chupper != '\n');
	
	/** Evaluate all characters and print the ones in LowerCase **/
	int chlower;
	
	printf("\nInsert a text and we will pick out the lower chars..\n");
	printf("Your text here: ");
	do
	{
		chlower = getchar();
		if(isnotcaps(chlower))
		{
			putchar(chlower);	
		}	
	}
	while(chlower != '\n');
		
	return (0);;;
}


int iscaps(int ch)
{
	/** Evaluate ch and see if it's an UPPER character. 0= false / 1=true **/
	if(ch < 'A' || ch > 'Z')
		return (0);
	else
		return (1);
}

int isnotcaps(int ch)
{
	/** Evaluate ch and see if it's NOT an UPPER character. 0= false / 1=true **/
	if(ch >= 'A' && ch <= 'Z')
		return (0);
	else
		return (1);
}
