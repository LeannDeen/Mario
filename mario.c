#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Variable definitions
    int h;
    int j;
    
    // This is a do/while loop
    do{
        printf("Enter amount between 0 and 23: ");
        h = GetInt();
        j = h;
    }
    while(h < 0 || h >= 24);
     
    for (int i = 0; i < j; i++)
    {
        for (int i = 1; i < h; i++)
        {
            printf (" ");
        }
        for (int i = j; i + 2 > h; i--)
        {
            printf ("#");
        }
        printf ("\n");
        h = h - 1;
    }     
}    
