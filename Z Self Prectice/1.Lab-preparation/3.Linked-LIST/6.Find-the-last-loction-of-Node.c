#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *createNode()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num;
    printf("\n\tEnter total Number of Node = ");
    scanf("%d",&num);

    while( num != 0)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter Node value = ");
        scanf("%d",&new_node->data);
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
    }
    return head;
}

void display(Node *head)
{
    int posi = 0;

    while(head != NULL)
    {

        posi++;
        head= head->next;

    }
    printf("\n\tLast node position = %d",posi);
}
int main()
{
    Node *a = createNode();
    display(a);
}
