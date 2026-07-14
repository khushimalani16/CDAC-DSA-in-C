//Q.3 Implement All Operations of Circular Queue
#include<stdio.h>

struct circularQueue{
    int data[5];
    int rear;
    int front;
};

void queueInit(struct circularQueue*q){
    q->rear=-1;
    q->front=-1;
}

int isFull(struct circularQueue*q){
    if ((q->rear + 1) % 5 == q->front)
        return 1;
    else
        return 0;
}

int isEmpety(struct circularQueue*q){
    if(q->rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue*q,int ele){
    if(isFull(q)){
        printf("Queue is Full\n");
    }
    else{
        q->rear=(q->rear+1)%5;
        q->data[q->rear]=ele;
        if(q->front ==-1)
            q->front=0;
    }
}

int dequeue(struct circularQueue*q){
    if(isEmpety(q)){
        printf("Queue is Empety\n");
        return -1;
    }
    else{
        int temp=q->data[q->front];
        q->data[q->front]=0;
        if(q->rear==q->front){
            q->rear=-1;
            q->front=-1;
        }
        else{
            q->front=(q->front +1)%5;
            
        }
        return temp;
    }
}

int peek(struct circularQueue*q){
    if(isEmpety(q)){
    printf("Queue is empty.\n");
    return -1;
}
    return q->data[q->front];
}

void display(struct circularQueue *q)
{
    int i;
    if(isEmpety(q))
    {
        printf("\nQueue is Underflow");
        return;
    }
    else
    {
        i = q->front;

    while(1){
        printf("%d ", q->data[i]);

        if(i == q->rear)
            break;

        i = (i + 1) % 5;
    }
    }
} 

int main()
{
    struct circularQueue q;
    queueInit(&q);
    int choice,ele;

do
{
    printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("\nEnter the element to be pushed: ");
            scanf("%d", &ele);
            enqueue(&q,ele);
            break;

            case 2:
            dequeue(&q);
            break;

            case 3:
            printf("\nFront element is: %d",peek(&q));
            break;

            case 4:
            display(&q);
            break;

            case 5:
            printf("\nexit");
            break;

            default:printf("\ninvalid choice");
        }

}while (choice != 5);
return 0;
}