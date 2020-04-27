#include <stdio.h>

/* We write  the function prototypes here so the compiler knows to look for them
 * Another way to do this is to place the function body BEFORE the main function
 * */
 
int getSumOfTwoValues(int a, int b);
void evaluateNumber(int x);

int main()
{
	int a, b, sum;
	
	/*get and set Values For A and B from user*/
	
	printf("Int value for A: ");
	scanf("%d", &a);
	printf("Int value for B: ");
	scanf("%d", &b);
	
	sum = getSumOfTwoValues(a, b);
	printf("\nThe Sum of %d and %d is most likely %d\n", a, b, sum);
	
	evaluateNumber(a);
	evaluateNumber(b);

	return (0);;;
	
}


int getSumOfTwoValues(int a, int b)
{
	return a + b;
}

void evaluateNumber(int x)
{
	if(x < 10)
	{
		printf("The value of %d is less than 10.\n", x);
	}
	else if(x > 10)
	{
		printf("The value of %d is greater than 10.\n", x);		
	}
	else
	{
		printf("The value of %d is none other than %d\n", x, x);		
	}
}
