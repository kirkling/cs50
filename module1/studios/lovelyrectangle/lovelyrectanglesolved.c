#include <stdio.h>
#include <cs50.h>

//get width and height from user
//print width # of <3 (height number of times)
//loop printing <3 the number of times of width. That will be inside a number loop saying how many times to do that.

int main(void)
{
	printf("Width: ");
	int width = GetInt();

	printf("Height: ");
	int height = GetInt();

	for (int i = 0; i < height; i++) //do the rows of hearts as many times as height
	{
		for (int j = 0; j < width; j++)
		{
			printf("<3"); //print as many hearts as in width
		}
		printf("\n"); //print new line to start next row of hearts
	}
}
