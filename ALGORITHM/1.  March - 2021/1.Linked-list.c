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
    int n ;
    scanf("%d",&n);

    while(n != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = n;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = tail= newNode;
        }
        else
        {

        }
    }
}

