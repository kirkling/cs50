#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	// hardcode answer variable
	int answer = 5;
	
	printf("\nI’m thinking of a number between 1 and 10. Can you guess what it is?\n\n");
	
	int x;

	for (int count = 1; count < 6; count++)
	{	
		printf("Guess #%i: ", count);	
		x = GetInt();
		
		if (x != answer)
		{
			printf("Wrong!\n\n");
		}
		else
		{
			printf("Correct! The number was five.\n\n");
			count = 6;
		}
	}
	
	if (x != answer)
	{
		printf("Sorry, you ran out of guesses.\n\n");
	}
}


 /**
  * PART 3 
  * Filename: guessfive.c
  * Save in Folder: ~/workspace/module1/studios/guessfive
  *
  * Most likely, you've been using a while loop so far. Let's now refactor, and use a for loop instead, just for kicks.  
  * Write another program in a file called guessfive.c, which behaves exactly like guess5, but is implemented with a for loop. 
  * (But if you did use a for loop in guess5, then use a while loop here.)
  * 
  */