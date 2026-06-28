#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("hello.txt", "r");

    if (fptr == NULL)
    {
        printf("File opening operation fails.\n");
        return 1;
    }

    int ch;
    int lower=0,upper=0,digit=0,special=0;

    while ((ch = getc(fptr)) != EOF)
    {
        //putchar(ch);

        if(isupper(ch)){
            upper++;
        }
        else if(islower(ch)){
            lower++;
        }
        else if(isdigit(ch)){
            digit++;
        }
        else{
            special++;
        }
    }

    printf("Uppercase Letters : %d \n",upper);
    printf("Lowercase Letters : %d \n",lower);
    printf("Digits            : %d \n",digit);
    printf("Special Characters: %d \n",special);

    fclose(fptr);

    return 0;
}