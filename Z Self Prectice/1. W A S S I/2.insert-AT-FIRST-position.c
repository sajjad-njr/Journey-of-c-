#include<stdint.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
}Node;

int main()
{
    Node *head , *new_node , *temp ;
    Node *n1,*n2;

    n1 = (Node*)malloc(sizeof(Node));
    n2 = (Node*)malloc(sizeof(Node));

    n1->data = 2 ;
    n1->next = n2;

    n2->data = 3;
    n2->next = NULL;




}
