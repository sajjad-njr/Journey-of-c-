#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head = NULL, *tail = NULL;

Node *createNode()
{
    int value ;
    printf("\n\tEnter some integer value for making list except -1 = ");
    scanf("%d",&value);

    while(value != -1)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        scanf("%d",&value);

    }
    return head;
}
int totalNode = 0;

int coutnNode(Node *a)
{
     a = head;
    while(a != NULL)
    {
         totalNode++;
        a = a->next;
    }
    return totalNode;
}

Node *insertPosition()
{
    int i = 1 , value , position = 1;
     printf("\n\tEnter the Position where insert node  = ");
    scanf("%d",&position);

    printf("\n\tEnter the new NODE value that want to first position = ");
    scanf("%d",&value);

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if(position < 0 || position > totalNode)
    {
        printf("\n\tInvalid Position ");
    }
    else if(head == NULL)
    {
        head = tail = newNode;
    }

    else if(position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
       Node *temp = head;
        while(i < position - 1)
        {
            temp = temp->next;
            i++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

void outPut(Node *a)
{
     a = head;
    while(a != NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
}

int main()
{
    Node *j = createNode();

    coutnNode(j);

    outPut(j);

    j = insertPosition();
    outPut(j);

    return 0;
}

