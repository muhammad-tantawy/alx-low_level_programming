#include<stdio.h>

/**
 *main -  printing all sizes
 *Return: return 0
*/

int main(void)
{

prinf("Size of a char: %zu byte(s)\n", sizeof(char));
prinf("Size of an int: %zu byte(s)\n", sizeof(int));
prinf("Size of a long int: %zu byte(s)\n", sizeof(long));
prinf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
prinf("Size of a float: %zu byte(s)\n" , sizeof(float));

return (0);		
}
