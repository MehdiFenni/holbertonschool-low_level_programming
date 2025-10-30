#include <stdio.h>

/**
 * fizz_buzz - affiche les nombres de 1 à 100,
 *             remplaçant multiples de 3 par "Fizz",
 *             multiples de 5 par "Buzz" et les deux par "FizzBuzz".
 */
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

#include <stdio.h>

void fizz_buzz(void);

/**
 * main - Point d'entrée du programme.
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Affiche 1..100 en remplaçant:
 *             multiples de 3 par "Fizz",
 *             multiples de 5 par "Buzz",
 *             multiples de 3 et 5 par "FizzBuzz".
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

