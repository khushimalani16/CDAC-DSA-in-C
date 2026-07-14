/*
Q.1 Read a File Character by Character and Count Uppercase, Lowercase, Digits and Special Characters 

Problem Statement 
Write a program to read a file character by character. Count the number of uppercase letters, lowercase letters, digits, and special characters present in the file, and display the results on the console. 

Concepts Used 
File Handling 
FILE Pointer 
fopen() fgetc() fclose() 
Looping ( while ) 
Conditional Statements ( if ) 
Character Classification ( isupper() , islower() , isdigit() ) 

Step-by-Step Approach 
 1. Open the file in read mode using fopen() .
 2. Check whether the file is opened successfully. 
 3. Read one character at a time using fgetc() . 
 4. Check whether the character is uppercase, lowercase, digit, or special character. 
 5. Increment the corresponding counter. 
 6. Continue until the end of the file ( EOF ). 
 7. Display the total counts. 
 8. Close the file using fclose() . 
*/

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