#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("I need an int!: ");
  //asking a user to give the program an integer value
  int firstInt = GetInt();

  printf("I need another int!: ");
  //asking the user to give the program a second integer value
  int secondInt = GetInt();

  if(firstNum > secondNum)
  {
    printf("%i is greater than %i\n", firstInt, secondInt);
  }
  else if(secondNum > firstNum)
  {
    printf("%i is greater than %i\n", secondInt, firstInt);
  }
  else
  {
    printf("%i is equal to than %i\n", firstInt, secondInt);
  }
}

//Exercise 1.1:
