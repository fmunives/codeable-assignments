#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int count_words(string description);
int count_letters(string description);
int count_sentences(string description);
void evaluate_print_index(int index);

int main(void)
{

    int index;
    float L=0,W=0, S=0;
    string description = get_string("Enter your description\n");


    int cw = count_words(description);
    int cl = count_letters(description);
    int cs = count_sentences(description);

    L = (float)(cl*100)/cw;
    S = (float)(cs*100)/cw;

    index = 0.0588 * L - 0.296 * S - 15.8;

    /*printf("cW is %i\n", cw);
    printf("cL is %i\n", cl);
    printf("cS is %i\n", cs);
    printf("average L is %.1f\n", L);
    printf("average S is %.1f\n", S);*/
    evaluate_print_index(index);


}

    int count_words(string description)
    {
        int count = 1;
        int length = strlen(description);
        for(int i=0;i<length ;i++ )
        {
            if(isspace(description[i]))
            {
                count++;
            }
            if(isspace(description[i]) && isspace(description[i+1]) ){
                i++;
            }
        }
        return count;
    }

    int count_letters(string description)
    {
        int count = 0;
        int length = strlen(description);
        for(int i=0;i<length ;i++ )
        {
            if(isalpha(description[i]))
            {
                count++;
            }
        }
        return count;
    }

    int count_sentences(string description)
    {
        int count = 0;
        int length = strlen(description);
        for(int i=0;i<length ;i++ )
        {
            if(ispunct(description[i])){
                count++;
            }
        }
        return count;
    }

    void evaluate_print_index(int index){
        if(index > 16){
            printf("Grade 16+\n");
        }else if(index < 1) {
            printf("Before Grade 1\n");
        }else {
            printf("Grade %i\n", index);
        }
    }