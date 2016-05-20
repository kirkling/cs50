#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\nPlease specify a width and height for the rectangle.\n");

	printf("Width: ");
	int w = GetInt();

	printf("Height: ");
	int h = GetInt();
	printf("\n");

    printf("Okay, here you go!\n\n");
    /* so going column by column, the rows will be built one at a time all the way down until shifting over to fill up the next column, and that'll go on until the size limit is reached. */
	for (int column = 0; column < h; column++)
	/* i is the columns, starting from 0 and going up until they reach the specified height number that the user wanted */
	{
		for (int row = 0; row < w; row++)
		/* j is the rows, starting from 0 and going up until they reach the specified width number that the user wanted. */
		{
			printf("<3");
		}
		printf("\n");
		/* this starts the next row, so the hearts aren't all in just one big jumbled mess */
	}

	printf("\n");
	/* to make sure the bottom of the rectangle isn't smashed up against something else below it, if there's anything there. */
}

  /**
   * Filename: rectangle.c
   * Save in Folder: ~/workspace/module1/studios/rectangle
   *
   * Write a program that "draws" a rectangle made of hearts "<3" on the console.
   * Your program should prompt the user for a width and a height, and then
   * print the corresponding rectangle.
   *
   * Example:
   *    $ ./rectangle
   *    Width: 8
   *    Height: 3
   *    <3<3<3<3<3<3<3<3
   *    <3<3<3<3<3<3<3<3
   *    <3<3<3<3<3<3<3<3
   *
   */
