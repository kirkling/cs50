#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	// hardcode answer variable
	int answer = 4;
	
	printf("I’m thinking of a number between 1 and 10. Can you guess what it is?\n");
	
	int guess; // guess variable

	for (int i = 1; i < 6; i++)
	{	
		printf("Guess #%i: ", i);	
		guess = GetInt();
		
		if (guess != answer)
		{
			printf("Wrong!\n");
		}
		else
		{
			printf("Correct!\n");
			i = 6;
		}
	}
	if (guess != answer)
	{
		printf("Sorry, you ran out of guesses.\n");
	}
}
