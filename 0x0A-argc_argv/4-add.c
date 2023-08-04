#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stype.h>

/**
 *main - function to add 2 positive numbers
 *@argc: the number of arguments
 *@argv: content of arguments
 *Return: 0 if succcess and 1 if symblos are in the argument
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}

		if (isdigit(argv[i]))
		{
			sum = atoi(argv[1]) + atoi(argv[2]);

			return (0);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}
}
