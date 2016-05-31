#include <stdio.h>
#include <cs50.h>

// This exercise is very similar to the example in the "ages" video on cs50; if you need help, look there first!

int main(void)
{
    int total;
    int i;

    // Ask the user how many people to check
    do
    {
        printf("How many people want to vote?: ");
        total = GetInt();
    }
    while (total < 0);

    int ages[total];

    // Ask for each person's age, and store it
    for (i = 0; i < total; i++)
    {
        printf("Age of person %i: ", (i + 1));
        ages[total] = GetInt();
    }

    // Output if each person can vote or not (they can vote if they're 18 or older!)
    for (i = 0; i < total; i++)
    {
        if (ages[total] >= 18)
        {
            printf("Person %i can vote!\n", (i + 1));
        }
        if (ages[total] <= 18)
        {
            printf("Person %i cannot vote :(\n", (i + 1));
        }
    }
}
