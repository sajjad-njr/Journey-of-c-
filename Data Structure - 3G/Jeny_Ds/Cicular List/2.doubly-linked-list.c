#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Node;

Node *head = NULL, *tail = NULL;

Node *createList()
{

    int n ;//value
    printf("\n\tEnter some INTEGER value for create SINGLY LINKED LIST ,and (-1) for stop linked list \n");
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

int count = 0;

Node *totalNode(Node *a)
{
    a = head;

    while(a != NULL)
    {
        count++;
        a = a->next;
    }
    printf("\n\tTotal Node in the list = %d",count);
    //return count ;
}
Node *insertPosition()
{
    int pos;
    printf("\n\tEnter the position where insert new node = ");
    scanf("%d",&pos);

    Node *new_node = (Node*)malloc(sizeof(Node));
    printf("\n\tEnter node value = ");
    scanf("%d",&new_node->data);

    new_node->prev = NULL;
    new_node->next = NULL;

    Node *temp ;
    temp = head;
    if(pos< 0 || pos > count)
    {
        printf("\n\tInvalid Position");
    }
    else if (pos == 1)
    {
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
        int i = 1 ;
        while (i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->next->prev = new_node;
    }
    return head;
}
Node *deletePosition()
{
    int position = 0, i = 1 ;
    Node *temp ;

    printf("\n\tEnter the position where we want to delete = ");
    scanf("%d",&position);

    temp = head;
    while( i < position)
    {
        temp = temp->next;
        i++;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);

    return head;
}

void Traverse(Node *a)
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
    Node *h = createList();

    h = totalNode(h);

    if(h == NULL)
    {
        printf("\nThe List is Empty ");
    }
    else
    {
        h = insertPosition();
        Traverse(h);

        h = deletePosition();
       Traverse(h);
    }
    return 0;
}

