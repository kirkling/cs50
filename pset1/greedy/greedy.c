#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int const quarter = 25;
    int const dime = 10;
    int const nickel = 5;
    int const penny = 1;
    float return;
    float total;
    int coins = 0;

    do
    {
        printf("O hai! How much change is owed?\n")
        return = GetFloat();
        printf("\n");

        if (return < 0)
        {
            printf("Error: Value cannot be negative.\n");
        }
    }
    while(return < 0);

    total = (return *= 100.00)

    printf("%f", total);

    while (total > 0)
    {
        do
        {
            (total - quarter);
            coins++;
        }
        while(total >= 25);

        do
        {
            (total - dime);
            coins++;
        }
        while(total >= 10)

        do
        {
            (total - nickel);
            coins++;
        }
        while(total >= 5);

        do
        {
            (total - penny);
            coins++;
        }
        while(total >= 1);

        /* or should I have a condition for the while being "while(total < 5 || total >= 1)" and etc.? Or should I yes really
        be using "while" or "if/if-else/if-else if-else" statements, or even both nested together and within each other, for this
        like I had originally thought to start out? Do I need to have new measures of the total declared after each one or will
        the program just go through this okay? */
    }
    if (total == 0)
    {
        printf("%i\n", coins);
    }
}
