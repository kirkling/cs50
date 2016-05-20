#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int time;

    do
    {
        printf("\nPlease tell me the length of your shower, in minutes.\n");

        /* prompt to get mumber of minutes from user */
        printf("minutes: ");
        time = GetInt();
    }
    while (time < 1);

    if (time > 0)
    {
        /* since 1.5 gallons = 192 ounces = 12 bottles of water, that's 12 bottles of water per minute. */
        int bottles = time *= 12;
        printf("bottles: %i\n", bottles);
        printf("\n");
    }
}

/* So there's water flowing out of your showerhead when you turn it on, obviously.

    approximately 1.5 gallongs/minute, to be exact.

    and 1 gallon = 128 oz.,
    and 1 bottle of water = 16 oz.,
    so that means that 1 gallon = 8 bottles of water,

    and if you shower for 1 minute,
        you've used 1.5 gallons of water,
        which is 192 ounces of water,
        which is equal to 12 bottles of water.

    and if you take a 10-minutes shower,
        that's 1.5 x 10 = 15 gallons of water,
        or 15 x 128 = 1,920 oz. of water,
        or 1,920/16 = 120 bottles of water.

    And now, Your Mission, Should You Choose To Accept It...

    Write a program in the C language that asks a user to input their time spent in the shower (in minutes),
    and then calculates the equivalent number of bottles that would hold the amount of water their shower used.

    So ask for minutes, and spit out bottles.

The end! */
