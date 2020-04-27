#include <stdio.h>
#include <string.h>

int main()
{
	
	/** Exemple of a Structure (struct) with a Structure inside (structception) **/
	
	struct date
	{
		int year;
		int month;
		int day;	
	};
	
	struct person
	{
		char name[32];
		struct date birthday;
	};
	
	
	struct person friend;
	
	strcpy(friend.name, "Aurora Aksnes");
	friend.birthday.year = 1996;
	friend.birthday.month = 6;
	friend.birthday.day = 3;
		
	
	printf("My friend %s was born on %d/%d/%d.\n", 
			friend.name,
			friend.birthday.day,
			friend.birthday.month,
			friend.birthday.year
			);
	
	return (0);
}
