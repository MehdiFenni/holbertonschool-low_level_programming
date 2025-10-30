
#include <stdio.h>

void fizz_buzz(void);

{
	int i;

	for (int i =1; i <= 100; 1++)
	{
	if (i % 15 == 0)
	    printf ("FizzBuzz");
	 else if (i % 3 == 0)
	    printf ("Fizz");
	 else if (i % 5 == 0)
	    printf ("Buzz");
	 else
	    printf("%d", i);

	if (i < 100)
	    printf(" ");
	}
	
	printf("\n");
	return (0);
}
