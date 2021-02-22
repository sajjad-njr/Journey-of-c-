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
int count = 0 ;
int totalNode(Node *a)
{
    a = head;

    while(a != 0)
    {
        count++;
        a = a->next;
    }
    return count;
}
Node *insert()
{
    int positio = 1, data;
    printf("\nEnter position for singly linked list = ");
    scanf("%d",&positio);

    Node *newNode = (Node*)malloc(sizeof(Node));

    if(positio < 0 || positio > count)
    {
        printf("\n\twrong position = ");
    }
    else if(head == NULL)
    {
        printf("\nEnter new node value = ");
        scanf("%d",&data);
        newNode->data = data;
        newNode->next = NULL;

        head = tail = newNode;
    }
    else if(positio == 1)
    {
        printf("\nEnter new node value = ");
        scanf("%d",&data);
        newNode->data = data;
        newNode->next = NULL;

        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *avail = head;
        int i = 1;
        while(i < positio -1)
        {
            avail = avail->next;
            i++;

        }
        printf("\nEnter new node value = ");
        scanf("%d",&data);
        newNode->data = data;

        newNode->next = avail->next;
        avail->next = newNode;

    }
    return head;
}
Node *del()
{
    Node *newNode , *temp;
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
    totalNode(b);
    Ni(b);
    b = insert();
    Ni(b);

    return 0 ;
}

