/*
Q.1 Write Functions to Accept and Print One Student Record 

Problem Statement
 Write a program to declare a structure to store student information. 
 The structure should contain Roll Number, Name, and Marks. 
 Write separate functions to accept and print one student record. 
 
 Concepts Used 
 Structure 
 Functions 
 Pointers to Structure 
 User Input / Output 
 Structure Members 
 
 Step-by-Step Approach 
  1. Define a structure named Student .
  2. Add members: Roll Number, Name, and Marks. 
  3. Create a function to accept student details. 
  4. Create another function to display student details. 
  5. Declare a structure variable in main() . 
  6. Call the accept function to store data. 
  7. Call the print function to display the record
*/

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
