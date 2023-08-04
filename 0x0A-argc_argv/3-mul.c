#include "main.h"
#include <stdio.h>

/**
 *main - function multiplies 2 numbers
 *@argc:number of arguments
 *@argv: content of the arguments
 *Return: returns 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	sum = argv[0] * argv[1];
	print("%d\n", sum);
	return (0);
}
