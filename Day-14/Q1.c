//Implementation of Priority Queue
#include<stdio.h>

#define SIZE 5

typedef struct item{
    int value;
    int priority;
}item_t;

typedef struct priorityQueue{
    int capacity;
    int size;
    item_t arr[SIZE];
}prioQueue_t;

void initqueue(prioQueue_t* pq){
    pq->capacity=SIZE;
    pq->size=0;
}

int isFull(prioQueue_t* pq){
    return pq->capacity==pq->size;
}

void enqueue(prioQueue_t* pq,int value,int priority){
    if(isFull(pq)){
        printf("Queue is Full\n");
        return;
    }
    int i=0;
    for( ;i<pq->size;i++){
        if(priority < pq->arr[i].priority){
            break;
        }
    }
            for(int j=pq->size-1;j>=i;j--)
                pq->arr[j+1]=pq->arr[j];
            
            
        
    

    pq->arr[i].priority=priority;
    pq->arr[i].value=value;
    pq->size++;

}

int isEmpety(prioQueue_t* pq){
   return pq->size==0;
}

item_t peek(prioQueue_t* pq){
    if(isEmpety(pq)){
        printf("Queue is empty");
    }
    return pq->arr[0];
    
}

item_t dequeue(prioQueue_t* pq){

    if(isEmpety(pq)){
    printf("Queue Empty\n");
    return;
    
}

    item_t  temp = pq->arr[0];
    for(int i=1;i<pq->size;i++){
        pq->arr[i-1]=pq->arr[i];
    }

    pq->size--;
    return temp;

}

void display(prioQueue_t* pq){
    for(int i=0;i<pq->size;i++){
        printf("%d,%d\n",pq->arr[i].value,pq->arr[i].priority);
    }
    printf("\n");
}



int main(){
    prioQueue_t pq;
    initqueue(&pq);
    int choice,value,priority;
   
    int flag=1;
    while(flag==1){
        printf("\nChoose a Operation\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice){
        case 1:
        {
            printf("Enter value and priority :");
            scanf("%d %d",&value ,&priority);
            enqueue(&pq,value,priority);
            break;
        }

        case 2:
        {
            dequeue(&pq);
            break;
        }

        case 3:
        {
            item_t temp = peek(&pq);
            printf("Value = %d Priority = %d\n", temp.value, temp.priority);
            break;
        }

        case 4:
        {
            display(&pq);
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