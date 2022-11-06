#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of argument
 *  Return: always 0
 **/

int main(int argc, char *argv[])
{
char err[] = "Error";

int result;

if (argc != 3)
{
	printf("%s\n", err);
	return (1);
}

result = atoi(argv[1]) * atoi(argv[2]);

printf("%i\n", result);
return (0);
}
