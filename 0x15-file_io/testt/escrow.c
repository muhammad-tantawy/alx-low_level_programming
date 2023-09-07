#include <stdio.h>

int main(void)
{
    float base = 150;
    float inter;
    float result;
    int number_of_cycles =1;

    while (base <3000)
    {
        inter = base * .05 ;
        result = (base + inter);
        if (number_of_cycles %2 == 0)
            result = result +50;
        base = result;
        number_of_cycles++;
    }
    printf (" number of cycles is %d",number_of_cycles);
}