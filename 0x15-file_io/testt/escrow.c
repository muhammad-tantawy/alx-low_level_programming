#include <stdio.h>

int main(void)
{
    float base = 250;
   // int people = 6;
    float inter;
    float result;
    int number_of_cycles =1;

    while (base <3000)
    {
        inter = base * .05 ;
        result =  (base + inter);
        base = result;
        if ( number_of_cycles %2 ==0)
            base = base + 50;
        printf("%f\n", base);
        number_of_cycles++;
    }
    printf (" number of cycles is %d",number_of_cycles);
}