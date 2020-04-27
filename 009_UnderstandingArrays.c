#include <stdio.h>

#define MEALS 3

int main()
{
	
	/** Exemple of a int array **/
	int calories[MEALS];
	int x, total;
	
	total =0;
	
	puts("Calorie Counter");
	
	for(x=0; x<MEALS; x++)
	{
		printf("Calories at meal %d: ", x+1);
		scanf("%d", &calories[x]);
		total = total + calories[x];
	}
	
	printf("You had a total of %d calories. \n\n", total);
	
	
	/**Exemple of a char array <==> string **/
	/*When using this type of declaring of a string. Always remember: last char must be NULL \0 */
	char text[] = 
	{
		'I',' ','a','m',' ','a',' ','s','t','r','i','n','g','!','\0'
	};
	
	puts(text);
	
	/**Exemple of a string <==> char array  **/
	char hello[] = "Greetings, humans and grinches and all in between!\n";
	int n;
	
	n= 0;
	while(hello[n] != '\0')
	{
		putchar(hello[n]);
		n++;
	}
	
	return (0);
}
