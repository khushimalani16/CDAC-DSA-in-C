//Q.1 Implement Descending Stack
#include<stdio.h>

#define SIZE 5

struct Stack{
    int top;
    int data[SIZE];
};

void initstack(struct Stack* st){
    st->top=SIZE;
}

int isFull(struct Stack* st){
    if(st->top==0){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack* st,int ele){
    if(isFull(st)){
        printf("Stack is Full\n");
    }
    else{
        st->top--;
        st->data[st->top]=ele;
    }

}

int isEmpety(struct Stack* st){
    if(st->top==SIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(struct Stack* st){
    if(isEmpety(st)){
        printf("Stack is empety");
        return -1;
    }
    else{
        return st->data[st->top];
    }
}

void pop(struct Stack* st){
    if(isEmpety(st)){
        printf("Stack is empety");
    }
    else{
        st->data[st->top]=0;
        st->top++;
    }
}

void display(struct Stack* st){
    if(isEmpety(st)){
        printf("Stack is empety");
    }
    else{
    for(int i=st->top;i<SIZE;i++){
        printf("%d ",st->data[i]);
    }
}

}

int main(){
    struct Stack st;
    initstack(&st);
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
            push(&st,ele);
            flag=1;
            break;
        }

        case 2:
        {
            pop(&st);
            flag=1;
            break;
        }

        case 3:
        {
            printf("Top Element %d",peek(&st));
            flag=1;
            break;
        }

        case 4:
        {
            display(&st);
            flag=1;
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