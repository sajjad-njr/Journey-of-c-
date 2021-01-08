#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ; //data = info
    struct node *next;

} Node;

Node *head, *new_node, *temp;
int no ;
//create linked list ;

void createNode()
{
    head = NULL ;


    printf("\n\tEnter the number of nodes = ");
    scanf("%d",&no);

    for(int i = 0 ; i < no ; i++)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter the %d Node element = ",i+1);
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
}

void traversList()
{
    Node *avail;
    avil = head;

    int num;
    printf("\n\tEnter a number that add with all element = ");
    scanf("%d",&num);

    while(avail != NULL)
    {
        printf(" %d ",avail->data + nun);
        avail = avail ->next ;
    }
}
