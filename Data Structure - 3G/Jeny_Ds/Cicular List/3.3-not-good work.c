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
    return head;
}
int count = 0;
Node *totalNode()
{
    Node *avail;

    avail = head;

    while(avail->next != head)
    {
        count++;
        avail = avail->next;
    }
    count++;
    printf("\n\tTotal Node = %d",count);

}



Node *insert_position()
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    int position = 0, i= 1;

    printf("\n\tEnter Position where new node insert = ");
    scanf("%d",&position);

    if(position < 0 || position > count)
    {
        printf("\n\tInvalid Position ");
    }
    else if(position == 1)
    {
        printf("Enter the value of Node = ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(tail == NULL)
        {
            tail = new_node;
            tail->next = new_node;
        }
        else
        {
            new_node->next = head;
            tail->next = new_node;
            head = new_node;
        }

        count++;
    }
    else
    {
        printf("Enter the value of Node = ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        Node *temp = tail->next;

        while(i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    return head;
}
Node *deletePosition()
{
    Node *nextNode, *currentNode , *temp;
    int position = 0, i = 1;

    currentNode = tail->next;
    printf("\n\tEnter Position = ");
    scanf("%d",&position);

    if(position < 0 || position > count)
    {
        printf("\n\tInvalid position");
    }
    else if(position == 1)
    {
         temp = tail->next;
        if(tail == 0)
        {
            printf("\n\tUnderflow");
        }
        else if(temp->next = temp)
        {
            tail = 0;
            free(temp);
        }
        else
        {
             temp = head->next;
             head = head->next;
             tail->next= head;
            free(temp);
        }
    }
    else
    {
        while(i<position-1)
        {
            currentNode = currentNode->next;
            i++;
        }
        nextNode = currentNode->next;
        currentNode->next = nextNode->next;
        free(nextNode);
    }
    return head;
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
    y = totalNode();
    y = insert_position();
    p();
    printf("\n\tNext = ");
     deletePosition();
    p();
    return 0;
}



