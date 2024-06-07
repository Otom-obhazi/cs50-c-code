#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // const means the number will not change
    const int mine = 2;
    int point = get_int("how many point did you lose\n");

    // using if statements
    if (point < mine)
    {
        printf("you lost fewer points\n");
    }
    else if (point > mine)
    {
        printf("you lost more points\n");
    }
    else
    {
        printf("we lost the same points\n");
    }
}