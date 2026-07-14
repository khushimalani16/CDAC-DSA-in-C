//WAP to calculate sum of digits reverse the number and check whether it is amstrong or not
#include<stdio.h>
int main(){
	
int num,rem,sum=0,reverse=0,count=0,armstrongSum=0;

printf("enter a number");
scanf("%d",&num);

while(num>0){
rem=num%10;
sum=sum+rem;
reverse=reverse*10+rem;
num=num/10;
count++;
}

int temp=0;
temp=num;

while(temp>0){
rem=num%10;
int power =1;
int i;
for(i=0;i<count;i++){
power=power*rem;
}
armstrongSum += power;
temp /= 10;

}

printf("The Reverse is %d \n",reverse);
printf("The sum is %d \n",sum);

if(armstrongSum==temp){
printf("It is an armstrong number");

}
else{
printf("It is not armstrong number");
}
}



