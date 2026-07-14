//Alternative method for Q1

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        int flag = 1;

        char *left = argv[1];
        char *right = argv[1] + strlen(argv[1]) - 1;

        while(left < right)
        {
            if(*left != *right)
            {
                flag = 0;
                break;
            }

            left++;
            right--;
        }

        if(flag)
            printf("palindrome");
        else
            printf("not palindrome");
    }

    return 0;
}
