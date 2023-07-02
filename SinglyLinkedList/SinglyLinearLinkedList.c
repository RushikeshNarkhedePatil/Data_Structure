#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

// Function Declaration 
void InsertFirst(PPNODE head,int no);
void InsertLast(PPNODE head,int no);
void InsertAtPos(PPNODE head,int no,int pos);
void DeleteFirst(PPNODE head);
void DeleteLast(PPNODE head);
void DeleteAtPos(PPNODE head,int pos);
void Display(PNODE head);
void Count(PNODE head);

// Function Implementation
// Insert First Element
void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;            // Create empty node
    newn=(PNODE)malloc(sizeof(NODE));       // allocate memory for new node.
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)      // ll is empty
    {
        *head=newn;
    }
    else        // ll contain node.
    {
        newn->next=*head;
        *head=newn;

    }
}
// Insert Last
void InsertLast(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    // Initilize 
    newn->data=no;
    newn->next=NULL;
    PNODE temp = *head;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }

}

// Display List Data
void Display(PNODE head)
{
    while (head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
    
}

int main()      // Entry point function
{
    PNODE First;
    First=NULL;
    InsertFirst(&First,1998);
    InsertFirst(&First,1999);
    InsertFirst(&First,2000);
    InsertFirst(&First,2001);
    InsertFirst(&First,2002);
    InsertFirst(&First,2003);
    InsertLast(&First,2005);
    Display(First);
    return 0;
}