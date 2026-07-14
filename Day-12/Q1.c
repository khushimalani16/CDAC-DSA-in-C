// Q.1 Create an Array of Employees and Search Employee by EmpID or
// Name

#include<stdio.h>
#include<string.h>

struct employee 
{
    int id;
    char name[50];
    float salary;
};
void accept(struct employee e[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {   
    printf("\nEnter the employee %d id:",i+1);
    scanf("%d",&e[i].id);

    printf("\nEnter the employee %d name:",i+1);
    scanf("%s",e[i].name);

    printf("\nEnter the employee %d salary:",i+1);
    scanf("%f",&e[i].salary);
    }


}

void display(struct employee e)
{
    printf("\nEmployee detail:\n");
    printf("\nEmployee ID : %d", e.id);
    printf("\nName        : %s", e.name);
    printf("\nSalary      : %.2f", e.salary); 
}

int main()
{
    int size,choice,searchid,found=0,i;
    char searchname[50];
    printf("\n Enter the size:");
    scanf("%d",&size);
    

    struct employee e[size];
    accept(e,size);

    printf("\nMEnu\n");
    printf("\n1.search by id:");
    printf("\n2.search by name:");
   

    printf("\nEnter choice:");
    scanf("%d",&choice);

    

    switch(choice)
    {
        case 1:
        {
        printf("\nEnter search id:");
        scanf("%d",&searchid);
        
        for(i=0;i<size;i++)
        {
            if(searchid==e[i].id)
            {
                display(e[i]);
                found=1;
                break;
            }
        }
        if(found == 0)
        {
            printf("Employee not found:");
        }
        break;
        }
        
            

        case 2:
        {
        printf("\nEnter search name:");
        scanf("%s",searchname);
        
        for(i=0;i<size;i++)
        {
            if(strcmp(searchname,e[i].name)==0)
            {
                display(e[i]);
                found=1;
                break;
            }
        }
        if(found == 0)
        {
            printf("Employee not found:");
        }
        break;
        }

        
        default:printf("invalid choice");
    }

    return 0;
}