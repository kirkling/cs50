#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Welcome to the Donut Hole!\n");
    
  printf("Today's Manager's Special is:\n");
  
  printf("Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries Oops All Berries\n");
    
    printf("How many would you like?\n");
    float howmany = GetFloat();
    
   //decided not to make this printf("%f\n", howmany);
    
    printf("How much would you like to pay per donut? (Suggested price is is $4.35 each)\n");
    float howmuch = GetFloat();
    
   //decided not to make this printf("%f\n", howmuch);
    
    printf("Ok, let me prepare that for you...\n");
    
  float cost = howmany *= howmuch;
  float tax = cost *= 0.5;
  float total = cost += tax;
    
    printf("After tax, your total is: %f", total);
    
    printf("\nThank you for snacking! Loop back around here soon!\n");
}