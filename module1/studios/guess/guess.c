#include <stdio.h>
#include <cs50.h>

int main(void) 
{
	int answer = 5;
	
	printf("\nI’m thinking of a number between 1 and 10. Can you guess what it is?\n\n");
	
	int count = 1;
	int x; 

	do 
	{	
		printf("Guess #%i: ", count);	
		x = GetInt();
		count++;
		
		if (x != answer)
		{
			printf("Wrong!\n\n");
		}
		else
			printf("Correct! The number was 5.\n\n");
	}
	while (x != answer);
}
