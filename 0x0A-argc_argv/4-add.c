#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - function to add 2 positive numbers
 *@argc: the number of arguments
 *@argv: content of arguments
 *Return: 0 if succcess and 1 if symblos are in the argument
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
		printf("%d\n", sum);
	}
	return (0);
}

