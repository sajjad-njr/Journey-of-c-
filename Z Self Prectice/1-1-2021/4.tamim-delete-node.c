#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
} Node;

 Node *removeNode(Node* head_ref, Node* newNode)
{
    if(head_ref == newNode)
    {
        head_ref = newNode->next ;
        free(newNode);
        return head_ref ;
    }
}

int main()
{
    Node *a  ,*f , *head , *b , *c ,*m;

    head = (Node*) malloc (sizeof(Node));
     a = (Node*) malloc (sizeof(Node));
    b = (Node*) malloc (sizeof(Node));
    c = (Node*) malloc (sizeof(Node));
    f= (Node*) malloc (sizeof(Node));

    head = NULL;

    a ->data = 1 ;
    a ->next = b ;
    head = a -> next;

    b ->data = 10;
    b -> next = f ;

    f ->data = 14540;
    f -> next = c ;

    c -> data = 890 ;
    c -> next = NULL;

   removeNode(head, a );

    m =  head;


    while(m != NULL)
    {
        printf(" %d ",m->data);
        m= m -> next ;
    }

    return 0;
}
