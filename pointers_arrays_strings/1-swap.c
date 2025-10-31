#include "main.h"

void swap_int(int *a, int *b)

{
	int x = 10, y = 42;


	swap_int(&x, &y);
	printf("x=%d, y=%d\n" , x , y);
	return 0;

}
