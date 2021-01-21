#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}Node;

Node* create()
{
    Node *head , *tail;
    head = NULL;
    tail = NULL;
    int num;
    scanf("%d",&num);

    while(num--)
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

void outPut(Node* h)
{
    while(h != NULL)
    {
        printf(" %d ",h->data);
        h = h->next;
    }
}
int main()
{
   Node*a =  create();
   outPut(a);

   return 0;
}
