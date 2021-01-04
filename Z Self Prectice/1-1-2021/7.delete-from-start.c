#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;
Node *head, *temp, *new_node;

void create()
{
    int n = 4;
    head = NULL;
    while(n--)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tenter node = ");
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

void deleteStart()
{
    temp = head ;
    head = head->next;

    free(temp);
}

void deleteEnd()
{
    Node *prev;
    temp = head ;

    while(temp->next != NULL)
    {
        prev = temp ;
        temp = temp ->next;
    }

    prev->next = NULL;
    free(temp);
}

void deletePosition()
{

    Node *nextNode ;
    int pos ;
    int i = 1 ;
    printf("\n\tEnter the position = ");
    scanf("%d",&pos);

    temp = head ;

    while(i < pos - 1 )
    {
        temp = temp->next ;
        i++;
    }
    nextNode = temp->next;
    temp->next =  nextNode->next;

    free(nextNode);

}
int main()
{
    //Node *head, *temp;
    //temp = head;
    Node *p;

    create();

    //deleteStart();

    //deleteEnd();

    deletePosition();

    p = head;
    while(  p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
}
