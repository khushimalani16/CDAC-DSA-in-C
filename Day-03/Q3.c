#include<stdio.h>

struct student{
	int rollno;
	char name[50];
	float marks;
};

void accept(struct student *ptr){
	printf("Enter the roll no of student: ");
	scanf("%d",&ptr->rollno);
	
	printf("Enter the name of student: ");
	scanf("%s",&ptr->name);
	
	printf("Enter the marks of student: ");
	scanf("%f",&ptr->marks);
}

void display(struct student s1){
	printf("\nRoll no : %d\n",s1.rollno);
	printf("Name : %s\n",s1.name);
	printf("Marks : %.2f\n",s1.marks);
}


int main(){
	struct student s1;
	accept(&s1);
	display(s1);
	
	return 0;
}