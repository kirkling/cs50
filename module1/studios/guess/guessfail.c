#include <stdio.h>

int main(void)
{
  int answer = 5

  printf("I'm thinking of a number between 1 and 10. Can you guess what it is?")
  int x = GetInt()

  {
    if (x == answer)
    {
      printf("Correct!"")
    }
    else if (x < 1; x < 1;)
    {
      printf("Invalid guess. Please use a number from 1 to 10.");
    }
    else
    {
      int count = 0
      while (x != answer)
      {
        printf(" ");
        count++;
        printf(" ");
      }
    }
  }
}

/* Write a program that draws/prints out/displays a rectangle made of heart (<3) symbols.
Have it ask the user for a width and a height and then print the corresponding rectangle.

This relates to the "mario" assignment in the problem set!!! */

/**
  * Filename: guess.c
  * Save in Folder: ~/workspace/module1/studios/guess
  * 
  * Part 1
  * Write a "guessing game" program that allows the user to guess a number between 1 and 10.
  * The program should continuously reprompt the user until they get the correct answer.
  * 
  * You can simply decide on a "correct answer" and hard-code that number into your code. 
  * Supposing for example that you decide to make 4 the correct answer, you will probably have a line like this:
  *     
  *     int answer = 4;
  * 
  * Notice that you'll need to keep track of how many guesses have happened so far, so that you can properly print "Guess #<n>"
  * Example: 
  * 
  *     I'm thinking of a number between 1 and 10. Can you guess what it is?
  *     Guess #1: 5
  *     Wrong!
  *     Guess #2: 9
  *     Wrong!
  *     Guess #3: 4
  *     Correct!
  * 
  */