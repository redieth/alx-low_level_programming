#include <stdio.h>
/**
 * main - function
 * @argc: offset count
 * @argv: array of argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
