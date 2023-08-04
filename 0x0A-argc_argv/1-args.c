#include "main.h"
#include <stdio.h>


/**
 * main - function prints number of arguments added
 * @argc: number of arguments
 * @argv: content of arguments
 * Retun: returns 0
 */

int main(int argc, char *argv[])

{
	printf("%d\n", (argc - 1));
	(void)*argv;
	return (0);
}
