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

//delete from first position
void *Delete_from_position()
{
    Node *temp ,*avail;
     temp = head;

    int i = 1 , position;

    printf("\n\tEnter the position = ");
    scanf("%d",&position);

    while( i < position - 1 )
    {
        temp = temp->next;
        i++;
    }
    avail = temp->next;
    temp ->next = avail->next;
    free(avail);

    //return temp;
}
// output show linked list
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

    Delete_from_position(list);

    display(list);
}

