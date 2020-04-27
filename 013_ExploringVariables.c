#include <stdio.h>

int main()
{
	
	/** The size of diffrent types of variables **/
	char a;
	short b;
	int c;
	long d;
	float e;
	double f;
	
	printf("An char variable occupies %lu bytes of storage\n", sizeof(a));
	printf("An short variable occupies %lu bytes of storage\n", sizeof(b));
	printf("An int variable occupies %lu bytes of storage\n", sizeof(c));
	printf("An long variable occupies %lu bytes of storage\n", sizeof(d));
	printf("An float variable occupies %lu bytes of storage\n", sizeof(e));
	printf("An double variable occupies %lu bytes of storage\n", sizeof(f));
	
	struct stuff 
	{
		int a;
		float b;
		char c[32];
	};
	
	printf("The structure 'stuff' occupies %lu bytes of storage\n", sizeof(struct stuff));
	
	
	
	/** Memory locations of variables **/	
	int aa;
	char bb;
	float cc;
	
	puts("\nMemory locations:");
	printf("AA is at %p\n", &aa);
	printf("BB is at %p\n", &bb);
	printf("CC is at %p\n", &cc);
		
	return(0);
}
