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

Node *deletePosition()
{
    int i = 1, position = 1;
    printf("\n\tEnter the Position where a Node Delete node  = ");
    scanf("%d",&position);

    Node *avail, *previousNode;
    avail = head;

    if(position < 0 || position > totalNode)
    {
        printf("\n\tInvalid Position\n");
    }
    else if(head == NULL)
    {
        printf("\n\tUnderflow");
    }
    else if(position == 1)
    {
        head = head->next;
        free(avail);
    }

    else
    {

        while(i < position - 1)
        {
            avail= avail->next;
            i++;
        }
        previousNode = avail->next;
        avail->next = previousNode->next;
        free(previousNode);
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

    j = deletePosition();
    outPut(j);

    return 0;
}


