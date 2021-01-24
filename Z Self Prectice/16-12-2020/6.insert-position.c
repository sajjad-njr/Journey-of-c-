#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;
int len = 0;
Node *head , *temp , *new_node;
Node *createNode()
{
    Node *head = NULL;
    Node *tail =  NULL;
    printf("\n\tEnter Node number = ");
    int i;
    scanf("%d",&i);

    while(i--)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));
        printf("\n\tEnter node value = ");
        scanf("%d",&new_node->data);
        new_node->next =  NULL;

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
    }
    len = i;
    return head;
}
void *insertPosi()
{
    int posi;
    printf("\n\tEnter the position = ");
    scanf("%d",&posi);

    if(posi > len)
    {
        printf("\n\tInvalid position ");
    }
    else
    {
        int i = 0 ;
        temp = head;
        while(i < posi)
        {
            temp = temp->next;
        }
        new_node = (Node*) malloc(sizeof(Node));
        printf("\n\tInter new Node = ");
        scanf("%d",&new_node->data);
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void pri(Node *head)
{
    while(head != NULL)
    {
        printf(" %d ",head->data);
        head = head->next;
    }
}
int main()
{
    Node *a = createNode();

    insertPosi();

    pri(a);

    return 0;
}
