#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do{
        dollars = get_float("Enter your dollars to change\n");

    }while(dollars < 0 );

    int coins = round(dollars * 100);

    int quarters= 25, dimes = 10, nickels = 5, pennies = 1; 
    int count = 0;

    while(quarters <= coins){
        coins = coins - quarters;
        count++;
    }
    while(dimes <= coins){
        coins = coins - dimes;
        count++;
    }
    while(nickels <= coins){
        coins = coins - nickels;
        count++;
    }
    while(pennies <= coins){
        coins = coins - pennies;
        count++;
    }
    
    printf("You use: %i\n", count);

}
