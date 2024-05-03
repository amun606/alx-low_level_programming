#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char myChar;
	int myInt;
	long int my_long_Int;
	long long int my_long_long_int;
	float myFloat;

	printf("Size of a char: %d byte(s)\n", sizeof(myChar));
	printf("Size of an int: %d byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %d byte(s)\n", sizeof(my_long_Int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(my_long_long_int));
	printf("Size of a float: %d byte(s)\n", sizeof(myFloat));

	return (0);
}

