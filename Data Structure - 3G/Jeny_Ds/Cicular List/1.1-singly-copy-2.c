#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

Node *head = NULL, *tail=NULL;

int count = 0;

Node *createList()
{
    int n;
    printf("\n\tEnter some INTEGER value for create SINGLY LINKED LIST ,and (-1) for stop linked list \n");
    scanf("%d",&n);

    while(n != -1)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));

        new_node->data = n;
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
        scanf("%d",&n);
    }
    return head;
}

int totalNode(Node *q)
{
    while( q != NULL)
    {
        count++;
        q = q->next;
    }
    return count;
}


Node *insertGivenposition()
{
    Node *avail ;

    int i = 1, position = 1;
    printf("\n\tEnter the position where insert Node = ");
    scanf("%d",&position);

    if( position < 0 || position > count)
    {
        printf("\n\tInvalid Position");
    }

    else if(position == 1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter New Node value = ");
        scanf("%d",&new_node->data);

        new_node->next = head;
        head = new_node;
    }
    else
    {
        Node *new_node = (Node*)malloc(sizeof(Node));

        avail = head ;
        while( i < position-1 )
        {
            avail = avail->next;
            i++;
        }
        printf("\n\tEnter New Node value = ");
        scanf("%d",&new_node->data);
        new_node->next =  avail->next;
        avail->next = new_node;
    }

    return head;
}

Node *deleteGivenPosition()
{
    Node *avail, *next_node;
    int i = 1, position = 0;
    printf("\n\tEnter the position where node from remove = ");
    scanf("%d",&position);
    avail = head;

    if(position < 0 || position > count)
    {
        printf("\nInvalid Position\n");
    }
    else
    {
        while(i < position-1)
        {
            avail = avail->next;
            i++;
        }
        next_node = avail->next;
        avail->next = next_node->next;
        free(next_node);

    }


    return head;
}



void Traverse(Node *q)
{
    while( q != NULL)
    {
        printf(" %d ",q->data);
        q = q->next;
    }
}

int main()
{

    int no, ch, e;
    printf("\n 1 -  Create  ");
    printf("\n 2 -  Insert");
    printf("\n 3 -  Delete");
    printf("\n 4 - Exit");
    printf("\nEnter choice = ");
    //createList();
     Node *i = createList();

    totalNode(i);

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createList();
            break;
        case 2:
            i = insertGivenposition();
            break;
        case 3:
            i = deleteGivenPosition();
            break;

        default:
            printf("\nInvalid Position");
        }
    }



    return 0;
}



