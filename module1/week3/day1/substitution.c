#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string obtain_validate_key();

int main(void)
{
    string key = obtain_validate_key();
    string text = get_string("enter you text\n");
    int array[26];

    //TODO encript the text, do not work weel ):

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == 'a')
        {
            array[i] = 0;
        }
        else if (text[i] == 'b')
        {
            array[i] = 1;
        }
        else if (text[i] == 'c')
        {
            array[i] = 2;
        }
        else if (text[i] == 'd')
        {
            array[i] = 3;
        }
        else if (text[i] == 'e')
        {
            array[i] = 4;
        }
        else if (text[i] == 'f')
        {
            array[i] = 5;
        }
        else if (text[i] == 'g')
        {
            array[i] = 6;
        }
        else if (text[i] == 'h')
        {
            array[i] = 7;
        }
        else if (text[i] == 'i')
        {
            array[i] = 8;
        }
        else if (text[i] == 'j')
        {
            array[i] = 9;
        }
        else if (text[i] == 'k')
        {
            array[i] = 10;
        }
        else if (text[i] == 'l')
        {
            array[i] = 11;
        }
        else if (text[i] == 'm')
        {
            array[i] = 12;
        }
        else if (text[i] == 'n')
        {
            array[i] = 13;
        }
        else if (text[i] == 'o')
        {
            array[i] = 14;
        }
        else if (text[i] == 'p')
        {
            array[i] = 15;
        }
        else if (text[i] == 'q')
        {
            array[i] = 16;
        }
        else if (text[i] == 'r')
        {
            array[i] = 17;
        }
        else if (text[i] == 's')
        {
            array[i] = 18;
        }
        else if (text[i] == 't')
        {
            array[i] = 19;
        }
        else if (text[i] == 'u')
        {
            array[i] = 20;
        }
        else if (text[i] == 'v')
        {
            array[i] = 21;
        }
        else if (text[i] == 'w')
        {
            array[i] = 22;
        }
        else if (text[i] == 'x')
        {
            array[i] = 23;
        }
        else if (text[i] == 'y')
        {
            array[i] = 24;
        }
        else if (text[i] == 'z')
        {
            array[i] = 25;
        }

        printf("value array %i\n", array[i]);
    }

    char new_values[strlen(text) - 1];

    int j = 0;

    int size = sizeof(array) / sizeof(array[0]);
    printf("size: %i\n", size);

    while (j < size)
    {
        for (int i = 0; i < strlen(key); i++)
        {
            if (array[i] == i)
            {
                new_values[i] = key[i];
                j++;
            }
        }
    }

    for (int z = 0; z < strlen(new_values); z++)
    {
        printf("%c", new_values[z]);
    }

    //printf("\n");
}

string obtain_validate_key()
{
    bool valid;
    string key = "";
    do
    {
        key = get_string("Enter your key\n");
        valid = false;

        if (strlen(key) != 26)
        {
            printf("You must have 26 characters\n");
        }
        else
        {
            int i;
            int p = -1;
            for (i = 0; i < strlen(key); i++)
            {
                if (isspace(key[i]))
                {
                    printf("Spacing is not allowed\n");
                    break;
                }
                if (isdigit(key[i]))
                {
                    printf("Number is not allowed\n");
                    break;
                }
                if (!isalpha(key[i]))
                {
                    printf("Your are not an alphabetic\n");
                    //valid = true;
                    break;
                }

                for (int j = i + 1; j < strlen(key); j++)
                {
                    if (key[i] == key[j])
                    {
                        printf("no equal is not allowed\n");
                        p = i;
                        break;
                    }
                }
            }
            if (p == -1)
            {
                valid = true;
                printf("good job\n");
            }
        }

    } while (valid == false);

    return key;
}