#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head = NULL, *tail = NULL;

Node *createNode()
{
    int value ;
    printf("\n\tEnter some integer value for making list except -1 = ");
    scanf("%d",&value);

    while(value != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));

        newNode->data = value;
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
        scanf("%d",&value);

    }
    return head;
}
Node *deleteLast()
{
    Node *previous_Node;
    Node *avail = head;

    while(avail->next != NULL)
    {
        previous_Node = avail;
        avail = avail->next;
    }

    if(head == NULL)
    {
        printf("\n\tUndereflow");
    }
    else if(avail == head)
    {
        free(avail);
    }
    else
    {
        previous_Node->next = NULL;
        free(avail);
    }
    return head;
}

void outPut(Node *a)
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
    Node *j = createNode();
    outPut(j);

    printf("\n\tAfter Delete  LAST  value = ");
    j = deleteLast();
    outPut(j);

    return 0;
}


