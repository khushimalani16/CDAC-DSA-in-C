//Calculate power of base index

#include <stdio.h>

int main() {
    int base, index,i;
    int power =1;

    printf("Enter the base and index: ");
    scanf("%d %d", &base, &index);

    for(i=0;i<index;i++){
     power=power*base;
     
     }

    printf("%d",power);




}