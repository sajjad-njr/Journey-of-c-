#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Node;

Node *createList();
Node *totalNode(Node *avail);
Node *insertPosition();
Node *deletePosition();
void Traverse(Node *avail);

Node *head = NULL, *tail = NULL;
int count = 0;

int main()
{
    Node *avail = createList();

    avail = totalNode(avail);

    if(avail == NULL)
    {
        printf("\nThe List is Empty ");
    }
    else
    {
        avail = insertPosition();
        Traverse(avail);

        avail = deletePosition();
        Traverse(avail);
    }
    return 0;
}

Node *createList()
{
    int value;
    printf("\n\tEnter some INTEGER values for create DOUBLY LINKED LIST ,and (-1) for stop linked list \n");
    scanf("%d",&value);

    while(value != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data =value ;
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
        scanf("%d",&value);
    }
    return head;
}

Node *totalNode(Node *avail)
{
    avail = head;
    while(avail != NULL)
    {
        count++;
        avail = avail->next;
    }
    printf("\n\tTotal Node in the list = %d",count);
}
Node *insertPosition()
{
    int position;
    printf("\n\tEnter the position where insert new node = ");
    scanf("%d",&position);

    Node *new_node = (Node*)malloc(sizeof(Node));

    Node *temp ;
    temp = head;
    if(position< 0 || position > count)
    {
        printf("\n\tInvalid Position");
    }
    else if (position == 1)
    {
        printf("\n\tEnter node value = ");
        scanf("%d",&new_node->data);

        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = tail =  new_node;
            count++;
        }
        else
        {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
            count++;
        }
    }
    else
    {
        printf("\n\tEnter node value = ");
        scanf("%d",&new_node->data);
        int i = 1 ;
        while (i < position-1)
        {
            temp = temp->next;
            i++;
        }
        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->next->prev = new_node;
        count++;
    }
    return head;
}
Node *deletePosition()
{
    int position = 0, i = 1 ;
    Node *avail ;

    printf("\n\tEnter the position where we want to delete = ");
    scanf("%d",&position);

    if(position < 0 || position > count)
    {
        printf("\n\tInvalid Position ");
        printf("\n\tPrevious Node value = ");
    }
    else if(position == 1)
    {
        avail = head;
        head = head->next;
        head->prev = NULL;
        free(avail);

    }
    else
    {
        avail = head;
        while( i < position)
        {
            avail = avail->next;
            i++;
        }

        avail->prev->next = avail->next;
        avail->next->prev = avail->prev;
        free(avail);
    }

    return head;
}

void Traverse(Node *avail)
{
    avail = head;
    while(avail != NULL)
    {
        printf(" %d ",avail->data);
        avail = avail->next;
    }
}

