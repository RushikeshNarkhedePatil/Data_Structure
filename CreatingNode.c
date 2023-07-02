#include<stdio.h>
#include<stdlib.h>
// Create Structure 
struct node
{
    int data;                           // 4byte
    struct node *next;                  // 8byte
};
typedef struct node NODE, *PNODE, **PPNODE;     // typedef struct node to PNODE;


void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));    // create memory
    newn->data = no;
    newn->next = NULL;

    if(*Head==NULL)
    {

        *Head=newn;
        
        //printf("%d",head->data);

    }
    else
    {
        newn->next=*Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head !=NULL)
    {
        printf("| %d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL \n");
}
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,30);
    InsertFirst(&First,54);
    InsertFirst(&First,77);
    Display(First);
    printf("%d",sizeof(PNODE));

return 0;
    //PNODE head;
    //head=(struct node *)malloc(sizeof(struct node));
    
}