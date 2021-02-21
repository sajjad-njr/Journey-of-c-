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
Node *inserLast()
{
    int value;
    printf("\n\tEnter the new NODE value that want to insert LAST position = ");
    scanf("%d",&value);

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    Node *temp = head;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {

        while(temp->next!= NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        //temp = newNode;
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

    j = inserLast();
    outPut(j);

    return 0;
}

