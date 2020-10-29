#include <stdio.h>
#include <cs50.h>
#include <math.h>

int coins = 0, rounded;
float change;
//Declaration of integer 'coins' and 'rounded' value and float 'change' and 'ChangeInDollars'

int main(void)
{
    //Get change input from user that is > 0
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);


//Transform input to dollars and round the result
    rounded = roundf(change * 100);


//Count number of quarters
    while (rounded >= 25)
    {
        coins ++;
        rounded -= 25;
    }
//Count number of dimes
    while (rounded >= 10)
    {
        coins ++;
        rounded -= 10;
    }
//Count number of nickels
    while (rounded >= 5)
    {
        coins ++;
        rounded -= 5;
    }
//Count number of pennies
    while (rounded >= 1)
    {
        coins ++;
        rounded -= 1;
    }
//Print the number of coins to give back
    printf("I owe you %i coins\n", coins);
}