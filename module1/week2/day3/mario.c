#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do{
        n = get_int("Enter a number between 1 to 8 please.\n");

    }while(n < 1 || n > 8);

    for(int i = 0 ;i < n;i++ )
    {
        for(int j=n-i;j<=n;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
