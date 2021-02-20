#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

Node *createList();
int totalNode(Node *avail);
Node *insertGivenPosition();
Node *deleteGivenPosition();
void Traverse(Node *avail);

Node *head = NULL, *tail=NULL;
int count = 0;

int main()
{
    Node *avail = createList();

    totalNode(avail);
    if(avail == NULL)
    {
        printf("\nList is NULL\n");
    }
    else
    {
        avail = insertGivenPosition();
        Traverse(avail);
        avail = deleteGivenPosition();
        Traverse(avail);
    }
    return 0;
}

Node *createList()
{
    int value;
    printf("\n\tEnter some INTEGER value for create SINGLY LINKED LIST ,and (-1) for stop linked list \n");
    scanf("%d",&value);

    while(value != -1)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));

        new_node->data = value;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        scanf("%d",&value);
    }
    return head;
}

int totalNode(Node *avail)
{
    while( avail != NULL)
    {
        count++;
        avail = avail->next;
    }
    return count;
}

Node *insertGivenPosition()
{
    Node *avail ;

    int i = 1, position = 1;
    printf("\n\tEnter the position where insert Node = ");
    scanf("%d",&position);

    if( position < 0 || position > count)
    {
        printf("\n\tInvalid Position");
    }

    else if(position == 1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter New Node value = ");
        scanf("%d",&new_node->data);

        new_node->next = head;
        head = new_node;
        count++;
    }
    else
    {
        Node *new_node = (Node*)malloc(sizeof(Node));

        avail = head ;
        while( i < position-1 )
        {
            avail = avail->next;
            i++;
        }
        printf("\n\tEnter New Node value = ");
        scanf("%d",&new_node->data);
        new_node->next =  avail->next;
        avail->next = new_node;
        count++;
    }

    return head;
}

Node *deleteGivenPosition()
{
    Node *avail, *next_node;
    int i = 1, position = 0;
    printf("\n\tEnter the position where node from remove = ");
    scanf("%d",&position);
    avail = head;

    if(position < 0 || position > count)
    {
        printf("\n\tInvalid Position\n");
        printf("\n\tPrevious Node value = ");
    }
    else if(position == 1)
    {
        head = head->next;
        free(avail);
    }
    else
    {
        while(i < position-1)
        {
            avail = avail->next;
            i++;
        }
        next_node = avail->next;
        avail->next = next_node->next;
        free(next_node);
    }

    return head;
}

void Traverse(Node *avail)
{
    while( avail != NULL)
    {
        printf(" %d ",avail->data);
        avail = avail->next;
    }
}



