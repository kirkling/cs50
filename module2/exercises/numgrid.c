#include <stdio.h>

int main(void)
{
    int rows;
    int columns;
    int a[rows][columns];
    int num = 0;

    do
    {
        printf("# of rows: ")
        rows = GetInt();
    }
    while(rows < 0);

    do
    {
        printf("# of columns: ")
        columns = GetInt();
    }
    while(rows < 0);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < columns; i++)
        {
            num = a[i][j];
            printf("%2i", a[i][j]);
            num++
        }
    }
    printf("\n,");
}

/* Write a program that asks the user to specify a
number of rows and columns, creates an array of
those dimensions with integers in ascending order
starting at 0, and then prints out the elements of the array. */
