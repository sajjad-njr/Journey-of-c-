#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;

} Node;

Node *head, *new_node, *temp;
//create linked list ;

void createNode()
{
    head = NULL ;

    int no ;
    printf("\n\tEnter the number of nodes = ");
    scanf("%d",&no);

    for(int i = 0 ; i < no ; i++)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter the %d Node element = ",i+1);
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
}

void insertFirst()
{
    Node *first;

    first = (Node*)malloc(sizeof(Node));
    printf("\n\tEnter tha that wanna insert in the first = ");
    scanf("%d",&first->data);

    first->next = head;
    head = first;

}

void addEnd()
{
    Node *end , *avail;
    end = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter tha that wanna insert in the last = ");
    scanf("%d",&end->data);
    end->next = NULL;
    avail = head ;

    while(avail->next != NULL)
    {
        avail = avail->next;
    }
    avail->next = end;

}

void prnitNode()
{
    Node *ptr;
    ptr = head ;

    while(ptr != NULL)
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }

}


int main()
{
    createNode();

    insertFirst();

    addEnd();

    prnitNode();
}
