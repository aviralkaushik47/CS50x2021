#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("change owned: ");
    } while (dollar < 0);
    
   
   int cents = round(dollar * 100);
   int coins = 0;
   
   int denominations[] = {25, 10, 5, 1};
   int size = 4;
   for (int i = 0; i < size; i++)
   //bad design
   {
   coins += cents / denominations[i];
   cents %= denominations[i];
   }
   printf("%i\n", coins);

    
}