#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }

}
// Display
void Display(PNODE head)
{
    while (head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    
}

int main()
{
    PNODE First=NULL;
    InsertFirst(&First,10);
    InsertFirst(&First,20);
    Display(First);
    return 0;
}
