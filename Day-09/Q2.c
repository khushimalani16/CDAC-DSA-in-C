/*
Q.2 Accept and Print Array of Student Structures 

Problem Statement
 Write functions to accept and print an array of student structures. 
 
 Concepts Used 
 Structure 
 Array of Structures 
 Functions 
 Looping ( for ) 
 User Input / Output 
 Structure Members 
 
 Step-by-Step Approach 
 1. Define a structure named Student . 
 2. Create an array of student structures. 
 3. Write a function to accept details of all students.
  4. Use a loop to store multiple student records.
   5. Write another function to display all student records. 
   6. Use a loop to print all student records. 
   7. Call both functions from main() . 
*/

#include<stdio.h>

struct student{
	int rollno;
	char name[50];
	float marks;
};

void accept(struct student sarr[]){
	int i;
	for(i=0;i<3;i++){
	
	printf("Enter the roll no of student %d : ",i+1);
	scanf("%d",&sarr[i].rollno);
	
	printf("Enter the name of student %d : ",i+1);
	scanf("%s",sarr[i].name);
	
	printf("Enter the marks of student %d : ",i+1);
	scanf("%f",&sarr[i].marks);
	
}
}

void display(struct student sarr[]){
	int i;
	for(i=0;i<3;i++){
	printf("\nRoll no : %d\n",sarr[i].rollno);
	printf("Name : %s\n",sarr[i].name);
	printf("Marks : %.2f\n",sarr[i].marks);
}
}


int main(){
	
	struct student sarr[3];
	accept(sarr);
	display(sarr);
	
	return 0;
}
