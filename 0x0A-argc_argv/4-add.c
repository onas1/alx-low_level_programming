#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *  @argc: argument count
 *  @argv: array of arguments
 *  return: always 0
 **/


int main(int argc, char *argv[])
{
	char err[] = "Error";

	int sum;

	int number;

	if (argc < 2) 
	{
		printf("%d\n", 0);
		retrun (0)
	}
	int i;
	for (i = 1; i < argc; i++)
	{

	number = argv[i];

	if (number < 47 || number > 57)
	{
	printf("%s\n", err);
	return (1);
	}

	if (number > 0)
	{
	sum += number;
	}
	}
printf("%d\n", sum);
return (0);

}
