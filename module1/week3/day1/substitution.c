#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool obtain_validate_key();

int main(void)
{
    string text;
    obtain_validate_key();
    //TODO obtain the ciphertext

}


 bool obtain_validate_key()
 {
    bool valid;
    do
    {
        string key = get_string("Enter your key\n");
        valid = false;

        if(strlen(key)<26)
        {
            printf("You must have at least 26 characters\n");

        }
            int i;
            for(i=0;i < strlen(key);i++)
            {
                if(isspace(key[i]))
                {
                    printf("Spacing is not allowed\n");
                    break;
                }
                if(isdigit(key[i]))
                {
                    printf("Number is not allowed\n");
                    break;
                }
                if(!isalpha(key[i]))
                {
                    printf("Your are not an alphabetic\n");
                    break;
                }
            }
            if(i == strlen(key)){
                valid = true;
                printf("good job\n");
            }

    }while(valid == false);

    return valid;
 }