#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}Node;

Node *head = NULL , *tail = NULL;

Node *createNode()
{

    int n ;
    printf("\n\tEnter -1 to stop the game = ");
    scanf("%d",&n);

    while(n != -1)
    {
         Node *newNode = (Node*)malloc(sizeof(Node));
         newNode->data = n ;
         newNode->prev = NULL;
         newNode->next = NULL;

         if(head == NULL)
         {
             head = tail = newNode;

         }
         else
         {
             tail->next = newNode;
             newNode->prev = tail;
             tail = newNode;
         }
         scanf("%d",&n);
    }
    return head;
}

Node *deleteNodeLast()
{
    Node *temp;

    if(head == NULL)
    {
        printf("\n\tThe list is NULL ");
    }
    else
    {
        temp = tail;

        tail->prev->next = NULL;
        tail = tail->prev;

        /*head = head->next;
        head->prev = NULL;
        */

        free(temp);
    }
    return head;

}

void p(Node *a)
{
    a = head;
    while(a != NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
}

int main()
{
    Node *h = createNode();

    h = deleteNodeLast();

    p(h);

    return 0;
}
