#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node * next ;

} Node;

void  afterInset(Node* prev_node, int new_data)
{

    if(prev_node == NULL )
    {
        printf("\n\tThe given node is NULL \n");

    }

    Node *new_node = (Node*) malloc(sizeof(Node));


    new_node->data = new_data ;

    new_node->next = prev_node -> next ;
    prev_node -> next = new_node ;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *p = NULL;
       Node *m = NULL;


    head = (Node*) malloc(sizeof(Node));
    second = (Node*) malloc(sizeof(Node));
    third  = (Node*) malloc(sizeof(Node));



    head->data = 456;
    head ->next = second ;

    second -> data = 1111;
    second -> next = third;

    third -> data = 11;
    third-> next = NULL;

    //afterInset(second, 789);

   // this is use null node to watch null
   // afterInset(m,89);
     afterInset(head->next, 789);

    p = head;

    while ( p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
    return 0;

}

