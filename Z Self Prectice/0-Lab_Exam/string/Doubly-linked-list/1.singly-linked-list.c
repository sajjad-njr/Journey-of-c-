#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *head = NULL , *tail = NULL;

Node *createNode()
{
    int n;
    printf("\n\tEnter -1 to stop create node = ");
    scanf("%d",&n);

    while(n != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = n;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        scanf("%d",&n);
    }
    return head;
}

void Ni(Node *a)
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
    Node *b = createNode();
    Ni(b);

    return 0 ;
}
