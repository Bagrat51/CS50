#include <cs50.h>
#include <stdio.h>

int main(void)
{    
    int coins;
    do
    {
        float change = get_float("Change: ");
        coins = round(change * 100);
    }
    while (coins <= 0);
    
    float quaters = coins / 25;
    float dimes = (coins % 25) / 10;
    float nickels = ((coins % 25) % 10) / 5;
    float pennies = (((coins % 25) % 10) % 5) / 1;
    
    printf("%f\n", quaters + dimes + nickels + pennies);
}
