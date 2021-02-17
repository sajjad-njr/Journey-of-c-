#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev ;
    struct node *next ;
} Node;
Node *head = NULL, *tail = NULL;

Node *createList()
{
    printf("\n\tEnter the -1 to stop the node = ");
    int n;
    scanf("%d",&n);

    while(n != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = n;
        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
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

    Node *temp ; temp = head;
    if(pos< 0 || pos > count)
    {
        printf("\n\tInvalid Position");
    }
    else if (pos == 1)
    {
        /*
                Node *new_node = (Node*)malloc(sizeof(Node));
                printf("\n\tEnter node value = ");
                scanf("%d",&new_node->data);

                new_node->prev = NULL;
                new_node->next = NULL;
                */
        if(head == NULL)
        {
            head = tail =  new_node;
        }
        else
        {
            head->prev = new_node;
            new_node->next = head;
            head = new_node;
        }
    }
    else
    {
        /*Node *new_node = (Node*)malloc(sizeof(Node));
        Node *new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter node value = ");
        scanf("%d",&new_node->data);

        new_node->prev = NULL;
        new_node->next = NULL;
        */
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
void a(Node *i)
{
    i = head;

    while(i != NULL)
    {
        printf(" %d ",i->data);
        i = i->next;
    }
}

int main()
{
    Node *r = createList();
    r = totalNode(r);
    r = insertPosition();
    a(r);
    return 0;
}
