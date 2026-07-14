//implementation of singly circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void initlist(struct node ** head){
    *head=NULL;
}

struct node * createNode(int ele){
    struct node*newNode=malloc(sizeof(struct node));
    newNode->data=ele;
    newNode->next=NULL;
    return newNode;

}


void addFirst(struct node** head,int ele){
    struct node* newNode=createNode(ele);
    if(*head==NULL){
        *head=newNode;
        (*head)->next=*head;
    }
    else{
        newNode->next=*head;
        struct node *trav=*head;
        while(trav->next!=*head){
            trav=trav->next;
        }
        trav->next=newNode;
        *head=newNode;

    }
}

void addLast(struct node ** head,int ele){
    struct node *newNode=createNode(ele);
    if(*head == NULL){
        *head=newNode;
        (*head)->next=*head;
    }
    else{
        struct node*trav=*head;
        
        while(trav->next!=*head){
            trav=trav->next;
        }
        trav->next=newNode;
        newNode->next=*head;
    }
}

void traverse(struct node ** head){
    if(*head==NULL){
        printf("List is Empty\n");

    }
    else{
        struct node*trav=*head;
        do{
            printf("%d ",trav->data);
            trav=trav->next;

        }while(trav!=*head);
       
    }
}

void delFirst(struct node** head){
    if(*head==NULL){
        printf("List is empty\n");
    }
    else if((*head)->next==*head){
        free(*head);
        *head=NULL;
        
    }
    else{
        struct node*temp=*head;
        struct node *trav =*head;
        while(trav->next!=*head){
            trav=trav->next;
        }
        trav->next=temp->next;
        *head=temp->next;
        free(temp);
        temp=NULL;
    }
}

void delLast(struct node** head){
    if(*head==NULL){
        printf("List is empty\n");
    }
    else if((*head)->next==*head){
        free(*head);
        *head=NULL;
    }
    else{
        struct node*trav=*head;
        while(trav->next->next!=*head){
            trav=trav->next;
        }
        struct node*temp=trav->next;
        trav->next=*head;
        free(temp);
        temp=NULL;
    }
}


int count(struct node ** head){
    if(*head==NULL)
        return 0;

    int cnt=0;
    struct node *trav=*head;

    do
    {
        cnt++;
        trav=trav->next;
    }while(trav!=*head);

    return cnt;
    
}


void delAtSpec(struct node** head,int pos){
    if(*head==NULL){
        printf("list is empty\n");
    }
    else if(pos<=0 || pos>count(head)){
        printf("Invalid position \n");
    }
    else if((*head)->next==*head){
        free(*head);
        *head=NULL;
    }
    else if(pos==1){
        delFirst(head);
    }
    else if(pos==count(head)){
        delLast(head);
    }
    
    else{
        struct node*trav=*head;
        int cnt=1;
        while(cnt!=pos-1){
            cnt++;
            trav=trav->next;
        }
        struct node*temp=trav->next;
        trav->next=temp->next;
        free(temp);
        temp=NULL;
    }
}

void addAtSpec(struct node ** head,int pos,int ele){
    struct node*newNode=createNode(ele);
    if(*head==NULL && pos==1){
        *head=newNode;
        (*head)->next=*head;
    }
    else if(pos==1){
        addFirst(head,ele);
    }
    else if(pos==count(head)+1){
        addLast(head,ele);
    }

    else if(pos<=0 || pos>count(head)+1){
        printf("Invalid position\n");
    }
    else{
        struct node*trav=*head;
        int cnt=1;
        while(cnt<pos-1){
            
            trav=trav->next;
            cnt++;
        }

        
        newNode->next=trav->next;
        trav->next=newNode;
    }
}

int main(){
    struct node* head;
    initlist(&head);
    int choice,ele,pos;
    do{
        printf("\n1.Add first\n");
        printf("2.Add last\n");
        printf("3.Add at Specific position\n");
        printf("4.Delete First\n");
        printf("5.Delete last\n");
        printf("6.Delete at Specific Position\n");
        printf("7.Traverse\n");
        printf("8.exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            {
                printf("Enter the element to be inserted: ");
                scanf("%d",&ele);
                addFirst(&head,ele);
                break;
            }

            case 2:
            {
                printf("Enter the element to be inserted: ");
                scanf("%d",&ele);
                addLast(&head,ele);
                break;
            }

            case 3:
            {
                printf("Enter the position: ");
                scanf("%d",&pos);
                printf("Enter the element to be inserted: ");
                scanf("%d",&ele);
                addAtSpec(&head,pos,ele);
                break;
            }

            case 4:
            {
                delFirst(&head);
                break; 
            }

            case 5:
            {
                delLast(&head);
                break; 
            }


            case 6:
            {
                printf("Enter the position: ");
                scanf("%d",&pos);
                delAtSpec(&head,pos);
                break; 
            }

            case 7:
            {
                traverse(&head);
                break;
            }

            case 8:
            {
                printf("Exiting");
                break;
            }

            default:
                printf("Invalid choice\n");
        }
    }while(choice!=8);

    return 0;
  
   
}