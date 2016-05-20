#include <stdio.h>

int main(void)
{
  //so you have columns for your table, starting with column 0 and going up to column 10 (but no further!)
  for(int column = 0; column < 11; column++)
  {
    //and then you have rows for the table, starting with row 0 and going up to row 10 (but no further!)
    for(int row = 0; row < 11; row++)
    {
      //and now we have cells, which are the product of each intersection of each column and row—their meeing spots
      int cell = column*row;
      //and this tells the program to visually show us the displayed values of each cell
      printf("%i ", cell);
    }
    //starts each row on a new line
    printf("\n");
  }
  //it'll print one row at a time, going through each column
}

//Exercise 1.2: Write a program that prints out a multiplication table for all integers from 0 to 10.

//0 0 0 0 0 0 0 0 0 0 0
//0 1 2 3 4 5 6 7 8 9 10
//0 2 4 6 8 10 12 14 16 18 20
//...
//0 10 20 30 40 50 60 70 80 80 100

//Bonus: write your code in such a way that all the numbers in the table are evenly spaced.
