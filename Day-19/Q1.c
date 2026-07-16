//Implementation of Doubly Circular Linked List


#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node*next;
    struct node*prev;

};

void init(struct node**head){
    *head=NULL;
}

struct node*createNode(int ele){
    struct node*newNode=malloc(sizeof(struct node));
    newNode->data=ele;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void addFirst(struct node**head,int ele){
    struct node * newNode= createNode(ele);
        if(*head==NULL)
        {
            *head= newNode;
            (*head)->prev= *head;
            (*head)->next= *head;

        }
        else
        {
            newNode->next=*head;
            newNode->prev=(*head)->prev;
            (*head)->prev->next=newNode;
            (*head)->prev= newNode; 
            *head= newNode;
        }
}



