#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Type your name:\n");
    
    string name = GetString();
    
    printf("I'm sorry %s, I'm afraid I can't do that.\n", name);
}