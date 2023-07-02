#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE,*PNODE,**PPNODE;
void Display(struct node *head,int data)
{
    printf("%d\t",data);
    printf("%d",head->next);
}
int main()
{
    // struct node NODE;
    // struct node *PNODE,*head;
    PNODE head;         // head is a pointer it is mension in main fuction. inside head pointer we store address of
                        // first node of linkedlist. 

    printf("%d",sizeof(NODE));
    head=NULL;

    // PNODE=&NODE;
    // PNODE->data=10;
    // PNODE->next=&PNODE;
    // PNODE->next->data=25;
    // PNODE->next->next=NULL;
    // //NODE.data=10;
    // NODE.next=NULL;
    // Display(PNODE,10);
  
    return 0;
}