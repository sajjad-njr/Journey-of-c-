#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;
Node *head, *tail;

Node *createNode()
{
    int n;
    printf("\n\tEnter the value for stop (-1)\n");
    scanf("%d",&n);

    head = NULL;
    tail = NULL;

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
int count = 0;
int totalNode(Node *q)
{
       while( q != NULL)
    {
        count++;
        q = q->next;
    }
    return count;
}

Node *insertFirst( )
{
    Node *avail ;

    avail = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter  First Position Node  the value = ");
    scanf("%d",&avail->data);
    avail->next = NULL;

    if( head == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        avail->next = head;
        head = avail;
    }
    return head;
}

Node *insertLast()
{
    Node *avail ;
    Node *new_node = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter Last Position Node  the value = ");
    scanf("%d",&new_node->data);
    new_node->next = NULL;

    avail = head ;

    while(avail->next != NULL)
    {
        avail = avail->next;
    }
    avail->next = new_node;


    return head;
}

Node *insert_position()
{
     Node *avail ;

    int i = 1 , position ;
    printf("\n\tEnter the position = ");
    scanf("%d",&position);

    if(position > count)
    {
        printf("\n\tInvalid Position");
    }
    else
    {
            Node *new_node = (Node*)malloc(sizeof(Node));

         avail = head ;
         while( i < position - 1)
         {
             avail = avail->next;
             i++;
         }
           printf("\n\tEnter   Node value = ");
          scanf("%d",&new_node->data);
            new_node->next =  avail->next;
            avail->next = new_node;
    }

    return head;
}

void p(Node *q)
{
    while( q != NULL)
    {
        printf(" %d ",q->data);
        q = q->next;
    }
}

int main()
{
    Node *i = createNode();

    //i = insertFirst();
    //p(i);

    //i = insertLast();
     totalNode(i);
    i = insert_position();
    p(i);

    return 0;
}
