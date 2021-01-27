#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

Node *head = NULL;
Node *tail = NULL;
//linked List CREATE
Node *createNode()
{
    //Node *head = NULL;
    //Node *tail = NULL;

    int num;

    printf("\n\tEnter -1 to stop the Linked List =  ");
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

Node *Delete_from_start()
{
    Node *temp;
    temp = head;

    head = head->next;
    // free use ro clear garbage value
    free(temp);
    return head;
}
void display(Node *avail)
{

    while( avail != NULL)
    {
        printf(" %d ",avail->data);
        avail = avail->next;
    }

}
int main()
{
    Node *list = createNode();
    list = Delete_from_start();
    display(list);
}
