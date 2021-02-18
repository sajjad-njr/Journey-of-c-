#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head = NULL, *tail = NULL;

Node *circular()
{
    int n ;
    scanf("%d",&n);

    while(n != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = n;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node ;
            tail = new_node;

        }
        tail->next = head;
        scanf("%d",&n);
    }
    return 0;
}

void p()
{
    Node *avail;
    if(head == 0)
    {
        printf("\n\tThe data is off ");

    }
    else
    {
        avail = head;

        while(avail->next != head)
        {
            printf(" %d ",avail->data);
            avail = avail->next;
        }
        printf(" %d ",avail->data);
    }
}

int main()
{
    Node *y = circular();
    p();
    return 0;
}
