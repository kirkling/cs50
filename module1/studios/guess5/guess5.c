#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	int answer = 5;
	
	printf("I’m thinking of a number between 1 and 10. Can you guess what it is?\n\n");
	
	int count = 1; 
	int x; 

	do 
	{	
		printf("Guess #%i:\n", count);	
		x = GetInt();
		count++;
		
		if (x != answer)
		{
			printf("Wrong!\n\n");
		}
		else
			printf("Correct!\n\n");
	}
	while ((x != answer) && (count < 6));
	
	if (count == 6)
	{
		printf("Sorry, you ran out of guesses.\n\n");
	}
}

/**
  * Part 2
  * Filename: guess5.c
  * Save in Folder: ~/workspace/module1/studios/guess5
  * 
  * Write another program called guess5, which gives the user only 5 chances to get the answer:
  * This should only involve some minor tweaking, so you can make a copy of your guess.c file using the cp command:
  *        $ cp guess.c guess5.c
  * Open up guess5.c and make changes there.
  *
  * Example:
  *     $ ./guess5
  *     I'm thinking of a number between 1 and 10. Can you guess what it is?
  *     Guess #1: 8
  *     Wrong!
  *     Guess #2: 5
  *     Wrong!
  *     Guess #3: 1
  *     Wrong!
  *     Guess #4: 7
  *     Wrong!
  *     Guess #5: 6
  *     Wrong!
  *     Sorry, you ran out of guesses.
  * 
  */