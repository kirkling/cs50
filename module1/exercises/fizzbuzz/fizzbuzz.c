#include <stdio.h>

int main(void)
{
  for(int x = 0; x < 100; x++)
  {
    if(x % 3 == 0 && x % 5 == 0)
    /
    //if the integer is divisible by both 3 AND 5
    {
      printf("fizzbuzz\n");
      //print the world "fizzbuzz" and move on to a new line
    }
    else if(x % 3 == 0)
    //condition is: x / 3 = 0
    //if the integer is divisible by 3
    {
      printf("fizz\n");
      //print the word "fizz" and move on to a new line
    }
    else if(x % 5 == 0)
    //condition is: x / 5 = 0
    //if the integer is divisible by 5
    {
      printf("buzz\n")
      //print the word "buzz" and move on to a new line
    }
    else
    //otherwise, just print the integer and move on to a new line
    {
      printf("%i\n", x)
    }
  }
}

//TODO: count from 0 to 100

/*
*If the current number is divisible by 3, print "fizz"
*If the current number is divisible y 5, print "buzz"
*If it is divisible by 3 and 5 print "fizzbuzz"
*
