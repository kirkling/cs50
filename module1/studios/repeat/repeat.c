#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\nGive me a phrase: ");
    string phrase = GetString();

    printf("How many times should I say it? ");
    int n = GetInt();

    while (n > 0)
    {
        printf("%s\n", phrase);
        n--;
    }

    printf("\n");
}
