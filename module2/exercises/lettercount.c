#include <stdio.h>
#include <cs50.h>
#include <string.h>

int letterCount(string s);
int count;
string s;

int main(void)
{
    //asks user to type a word or phrase
    printf("Please give me a word or phrase. \n");
    s = GetString();

    printf("%i\n", count);
}

int letterCount(string s)
{
    //sets the count as 0 so it can go up from there with each instance of finding a letter g
    int count = 0;

    //strlen just returns the length of the string
    for (int i = 0; i < strlen(s); i++) //how long do we want to keep looping through? for the strlen.
    {
        if (s[i] == 'g' || s[i] == 'G')
        {
            count++;
        }
    }
    return count;
}

/* Write a function that takes a string as input,
   counts the number of times the letter 'g' appears in the string,
   and returns this number as the output of the function. Call your function letterCount().

    letterCount("goodbye"); //returns 1
    letterCount("google"); //returns 2
    letterCount("hello"); //returns 0

   Extra Credit: Instead of checking for the letter 'g', update your function to allow
   the user to specify which letter they want counted.
The end! */

/* sooooooo declare the variable g as what you're looking for, 97 + 26
