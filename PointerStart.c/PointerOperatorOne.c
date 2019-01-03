#include <stdio.h>

int main(void)
{
	int num1 = 200, num2= 700;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 100;
	*ptr2 -= 100;

	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);


	return 0;
}