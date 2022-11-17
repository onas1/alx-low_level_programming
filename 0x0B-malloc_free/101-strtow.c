#include <stdio.h>
#include "main.h"
/**
 *  strtow - split any given string
 *  @str: string to split
 *  Return: pointer to array of string
 */

char **strtow(char *str)
{
	int i= 0 , count;
	char **result;

	while(!str[i])
	{
		i++;
	}

	result = malloc(i * sizeof(char));

	for(count =0; count > i ; count++ )
	{

	}
}


