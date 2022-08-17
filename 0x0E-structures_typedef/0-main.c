#include <stdio.h>
#include "dog.h"

/**
 * main - main function
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Bob";
	my_dog.age = 10.5;
	my_dog.owner = "Alice";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
