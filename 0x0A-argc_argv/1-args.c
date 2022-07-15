#include <stdio.h>
/**
 * main - function
 * @argc: offset count
 * @argv: array of argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("%d\n", argc);
	return (0);
}
