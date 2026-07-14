//Implementation of Array list
#include<stdio.h>

#define SIZE 5

struct arrayList{
    int arr[SIZE];
    int capacity;
    int size;
};

void initList(struct arrayList*list){
    list->capacity=SIZE;
    list->size=0;
}

void insertBegin(struct arrayList*list,int ele){
    if(list->size==list->capacity)
        return;

    for(int i = list->size-1; i>=0; i--){
        list->arr[i+1]=list->arr[i];
    }

    list->arr[0]=ele;
    list->size++;

}

void insertEnd(struct arrayList*list,int ele){
    if(list->size==list->capacity)
        return;

    list->arr[list->size]=ele;
    list->size++;
    
}


void insertAtPos(struct arrayList*list,int pos,int ele){
    if(list->size==list->capacity)
        return;
    if(pos<0 || pos>list->size)
        return;

    int i = list->size-1;
    for(; i>=pos; i--){
        list->arr[i+1]=list->arr[i];
    }

    list->arr[i+1]=ele;
    list->size++;

}

void deleteBegin(struct arrayList*list){
    if(list->size==0)
        return;

    for(int i = 0; i<list->size-1; i++){
        list->arr[i]=list->arr[i+1];
    }

    list->size--;

}

void deleteEnd(struct arrayList*list){
    if(list->size==0)
        return;

    list->size--;
    
}

void deleteAtPos(struct arrayList*list,int pos){
    if(list->size==0)
        return;
    if(pos<0 || pos>=list->size)
        return;

    int i = list->size-1;
    for(i=pos+1; i<list->size; i++){
        list->arr[i-1]=list->arr[i];
    }
    list->size--;

}

void traverseForward(struct arrayList*list){
    printf("Array List : ");
	for(int i = 0 ; i < list->size ; i++)
	printf("%-4d", list->arr[i]);
	printf("\n");
}

void traverseBackward(struct arrayList*list){
    printf("Array List : ");
	for(int i = list->size-1 ; i >= 0 ; i--)
	printf("%-4d", list->arr[i]);
	printf("\n");
}

int search(struct arrayList*list,int key){
    if(list->size==0){
        printf("array is empety");
        return -1;
    }
        
    
    else{
        for(int i=0;i<list->size;i++){
        if(key==list->arr[i])
        return i;
    }    
    }
    return -1;

}

void reverse(struct arrayList*list){
    for(int i=0;i<list->size/2;i++){
        int temp = list->arr[i];
        list->arr[i] = list->arr[list->size - 1 - i];
        list->arr[list->size - 1 - i] = temp;
    
    }
}

void sort(struct arrayList*list){
    int swap=1;
    for(int itr=0;itr<list->size;itr++)
    {
        for(int pos =0;pos<list->size-itr-1;pos++)
        {
            if(list->arr[pos]>list->arr[pos+1])
            {
                int temp=list->arr[pos];
                list->arr[pos]=list->arr[pos+1];
                list->arr[pos+1]=temp;

                swap=1;
            }
        }

        swap= -1;
    }
}

int main(){
    struct arrayList list;
    initList(&list);
    int choice,ele,pos,key;
    do{
        printf("\n1.Insert first\n");
        printf("2.Insert last\n");
        printf("3.Insert at Specific position\n");
        printf("4.Delete First\n");
        printf("5.Delete last\n");
        printf("6.Delete at Specific Position\n");
        printf("7.Forward Traverse\n");
        printf("8.Backward Traverse\n");
        printf("9.Search an element\n");
        printf("10.Reverse array\n");
        printf("11.Sort Array\n");
        printf("12.exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice){
        case 1:
        {
            printf("Enter the element to be inserted: ");
            scanf("%d",&ele);
            insertBegin(&list,ele);
            break;
        }

        case 2:
        {
            printf("Enter the element to be inserted: ");
            scanf("%d",&ele);
            insertEnd(&list,ele);
            break;
        }

        case 3:
        {
            printf("Enter the element to be inserted: ");
            scanf("%d",&ele);
            printf("Enter the position: ");
            scanf("%d",&pos);
            insertAtPos(&list,pos,ele);
            break;
        }

        case 4:
        {
            deleteBegin(&list);
            break;
        }

        case 5:
        {
            deleteEnd(&list);
            break;
        }

        case 6:
        {
            printf("Enter the position: ");
            scanf("%d",&pos);
            deleteAtPos(&list,pos);
            break;
        }

        case 7:
        {
            traverseForward(&list);
            break;
        }

        case 8:
        {
            traverseBackward(&list);
            break;
        }

        case 9:
        {
            printf("Enter the key to be searched: ");
            scanf("%d",&key);
            int res=search(&list,key);
            if(res!=-1)
            printf("Key found at %d",res);
            else
            printf("Key not found");
            break;
        }

        case 10:
        {
            reverse(&list);
            break;
        }

        case 11:
        {
            sort(&list);
            break;
        }

        case 12:
        {
            printf("Exiting\n");
            break;
        }

        default:
            printf("Invalid Choice\n");

    }

    }while(choice!=12);

    
}

