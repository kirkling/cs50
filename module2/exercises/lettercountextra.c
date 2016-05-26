#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Give me a letter: \n");
    char l = GetChar();

    int countg = letterCount(("%s", s), l)
    //asks user to type a word or phrase
    printf("Please give me a word or phrase.\n")
    string s = GetString();
    printf("\n");

    printf("%i instances of %c\n\n", countg, l);
}

int letterCount(string s)
{
    //sets the count as 0 so it can go up from there with each instance of finding a letter g
    int count = 0;

    //strlen just returns the length of the string
    for (int i = 0; i < strlen(s); i++) //how long do we want to keep looping through? for the strlen.
    {
        if (s[i] == letter)
        {
            count++;
        }
    }

    return count;
}
