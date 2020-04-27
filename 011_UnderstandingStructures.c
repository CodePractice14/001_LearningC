#include <stdio.h>


int main()
{
	
	/** Exemple of a Structure (struct) **/
	
	struct bank
	{
		int account;
		float balance;
	};
	
	struct bank checking;
	
	checking.account = 1001;
	checking.balance = 500.330;
	
	printf("Checking Account %d has a balance of %f\n",
			checking.account,
			checking.balance
			);
			
	struct bank savings;
	
	savings.account = 9001;
	savings.balance = 900.500;
	
	printf("Savings Account %d has a balance of %f\n",
			savings.account,
			savings.balance
			);
	
	
	
	
	struct person
	{
		char name[32];
		int age;
	};
	
	struct person president = 
	{
		"George Calinton",
		40
	};
	
	printf("%s is %d years old.\n", 
			president.name,
			president.age
			);
	
	return (0);
}
