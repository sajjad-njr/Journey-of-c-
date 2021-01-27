#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

//linked List CREATE
Node *createNode()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num;

    printf("\n\tEnter  (-1) to stop the Linked List =  ");
    scanf("%d",&num);

    while( num != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));

        new_node->data = num;
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

        scanf("%d",&num);
    }
    return head;
}
// For out put show
void display(Node *head)
{
    int posi = 0;

    while(head != NULL)
    {
        posi++;
        head = head->next;
    }
    printf("\n\tThe Last position of NODE = %d",posi);
}
int main()
{
    Node *a = createNode();
    display(a);
    return 0;
}
