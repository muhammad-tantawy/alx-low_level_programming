#include <stdio.h>

int main(void)
{
    float base = 450;
   // int people = 6;
    float inter;
    float enter = 0;
    float result;
    int number_of_cycles =1;

    while (enter <3000)
    {
        inter = base * .05 ;
        result =  (base + inter);
        base = result;
        if ( number_of_cycles %2 ==0)
            base = base + 50;
        enter = base + enter;
        printf("%f\n", enter);
        number_of_cycles++;
    }
    printf (" number of cycles is %d",number_of_cycles);
}