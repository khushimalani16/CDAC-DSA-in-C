//Function to Print Prime numbers in Given Range

#include <stdio.h>

void printPrimes(int start, int end) {
for (int num = start; num <= end; num++) {
if (num < 2)
continue;

int isPrime = 1;

for (int i = 2; i * i <= num; i++) {
if (num % i == 0) {
isPrime = 0;
break;
}
}

if (isPrime)
printf("%d ", num);
}
}

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers: ");
    printPrimes(start, end);

    return 0;
}