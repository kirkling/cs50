#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int space;
    int hash;
    int rows;

    do
    {
        printf("\nHeight: "); /* ask user for height */
        height = GetInt();
    }
    while(height < 0 || height > 23); /* makes sure that the height can't be fewer than 0 or more than 23 rows */

    for (rows = 1; rows <= height; rows++) /* so for however many rows high the person wanted it to be... */
    {
        for (space = (height - rows); space > 0; space--) /* declares how many spaces should be in each line */
        {
            printf(" "); /* prints a space */
        }

        for (hash = 1; hash <= (rows + 1); hash++) /* declares how many hash marks should be in each line */
        {
            printf("#"); /* prints a hash mark */
        }
        printf("\n"); /* starts a new line so the terminal command line isn't smashed against the last row */
    }
    printf("\n"); /* adds another row just to look nicer */
}

/* write a program that recreates the old half-pyramid—positive incline, like the slash mark /—
    that you used to have to make Mario jump up to get to the red flag poles.

    Make the hill out of hash marks (#).
        They have to go up from at least two, not one, because of how the system reads the code.

    You have to get a height and a width from the user, where each is less than 23.
    They also cannot be negative.

    I'm going to have to also make it have to be greater than one, too, or there couldn't be any hill...

    Okay, so ask the user for the width, ask the user for the height, and then
    have it go column by column and row by row, printing out one more hash mark
    with each new line, until it reaches the full size the user requested.

The end! */
