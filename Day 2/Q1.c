#include<stdio.h>

int isLeapYear(int n){

if((n%4==0 && n%100!=0)||(n%400==0))
return 1;
else
return 0;

}

void printDaysInMonth(int month,int year){

switch(month){
case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
printf("31 Days \n");
break;

case 4: case 6: case 9: case 11:
printf("30 Days \n");
break;

case 2:
if(isLeapYear(year)){
printf("29 Days \n");
}
else{
printf("28 Days \n");
}
break;

default: printf("Invalid month \n");
  
}

}

int main()
{

int year,month;
printf("Enter the year: ");
scanf("%d",&year);

printf("Enter month (1-12): ");
scanf("%d", &month);

if (isLeapYear(year))
printf("%d is a Leap Year\n", year);
else
printf("%d is not a Leap Year\n", year);

printDaysInMonth(month, year);

return 0;

}