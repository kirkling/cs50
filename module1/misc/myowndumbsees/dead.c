#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Type your name:\n");
    
    string name = GetString();
    
    printf("He's dead, %s.\n", name);
}