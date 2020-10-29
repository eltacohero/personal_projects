#include <stdio.h>
#include <cs50.h>

int main(void)
{

//Integer declaration
    int height;
//Input from user
    do
    {
        height = get_int("Please enter the height of the pyramid: ");
    }
    while (height < 0 || height > 23);

//Left pyramid
//Print that many rows
    for (int i = 0; i < height; i++)
    {
        //Print that many spaces at the left
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }
        //Print that many hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        //Space between the two parts
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }
        //Hashes at the right of the pyramid
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}