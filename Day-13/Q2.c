//Q.2 Implement All Operations of Linear Queue
#include<stdio.h>

#define SIZE 5

struct queue{
    int rear;
    int front;
    int data[SIZE];
};

void initqueue(struct queue* q){
    q->rear=-1;
    q->front=-1;
}

int isFull(struct queue* q){
    if(q->rear==SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct queue* q,int ele){
    if(isFull(q)){
        printf("Queue is Full\n");
    }
    else{
        q->rear++;
        q->data[q->rear]=ele;
    }

    if(q->front==-1){
        q->front=0;
    }

}

int isEmpety(struct queue* q){
    if(q->rear==-1 || q->front>q->rear){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(struct queue* q){
    if(isEmpety(q)){
        printf("Queue is empety");
        return -1;
    }
    else{
        return q->data[q->front];
    }
}

int pop(struct queue* q){
    if(isEmpety(q)){
        printf("Queue is empety");
        return -1;
    }
    else{
        int temp =q->data[q->front];
        q->front++;
        return temp;
    }

}

void display(struct queue* q){
    if(isEmpety(q)){
        printf("Queue is empety");
        return;
    }
    else{
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->data[i]);
    }
}

}

int main(){
    struct queue q;
    initqueue(&q);
    int choice,ele;
   
    int flag=1;
    while(flag==1){
        printf("\nChoose a Operation\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice){
        case 1:
        {
            printf("Enter the elemnt to push :");
            scanf("%d",&ele);
            push(&q,ele);
            break;
        }

        case 2:
        {
            printf("Deleted element: %d\n", pop(&q));
            break;
        }

        case 3:
        {
            printf("Top Element %d",peek(&q));
            break;
        }

        case 4:
        {
            display(&q);
            break;
        }

        case 5:
        {
            flag=0;
            break;
        }

        default:
        printf("Invalid Choice");


        }
    }


    return 0;
}