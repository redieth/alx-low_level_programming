#include <stdio.h>
/**
 * main - function
 * @argc: offset count
 * @argv: array of argument
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
