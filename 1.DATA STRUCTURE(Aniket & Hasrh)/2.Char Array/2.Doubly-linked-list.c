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
    scanf("%d",&n);

    while(n != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = n;
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
    return head ;
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
    Node *s = createNode();
    p(s);

    return 0;
}


