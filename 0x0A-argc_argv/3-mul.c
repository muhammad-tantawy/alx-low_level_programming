#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function multiplies 2 numbers
 *@argc:number of arguments
 *@argv: content of the arguments
 *Return: returns 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[0]) * atoi( argv[1]);
	printf("%d\n", sum);
	return (0);
}
