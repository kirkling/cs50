#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	// hardcode answer variable
	int answer = 4;
	
	printf("I’m thinking of a number between 1 and 10. Can you guess what it is?\n");
	
	int i = 1; // counter variable
	int guess; // guess variable

	do 
	{	
		printf("Guess #%i: ", i);	
		guess = GetInt();
		i++;
		
		if (guess != answer)
		{
			printf("Wrong!\n");
		}
		else
			printf("Correct!\n");
	}
	while (guess != answer);
}
