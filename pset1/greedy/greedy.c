#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int const quarter = 25;
    int const dime = 10;
    int const nickel = 5;
    int const penny = 1;
    float amt;
    float total;
    int coins = 0;

    do
    {
        printf("O hai! How much change is owed?\n");
        amt = GetFloat();

        if (amt < 0)
        {
            printf("Error: Value cannot be negative.\n");
        }
    }
    while(amt < 0);

    total = (amt *= 100.00);

    /* printf("%f\n", total); */

    while (total > 0)
    {
        do
        {
            (total -= quarter);
            coins++;
        }
        while(total >= 25);

        do
        {
            (total -= dime);
            coins++;
        }
        while(total >= 10);

        do
        {
            (total -= nickel);
            coins++;
        }
        while(total >= 5);

        do
        {
            (total -= penny);
            coins++;
        }
        while(total >= 1);
    }
    printf("%i\n", coins);
}
