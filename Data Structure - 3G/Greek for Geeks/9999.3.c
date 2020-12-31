#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;

void push(Node** head_add, int n )
{

}

int main()
{
    Node *head, *second, *third ;
    head = (Node*) malloc(sizeof(Node));
    first = (Node*) malloc(sizeof(Node));
    second  = (Node*) malloc(sizeof(Node));

    head ->data = 374;
    head ->next = second;

    first ->data = 89;
    first ->next = third ;

    second -> data = 46;
    second ->next = NULL;

    while(head != NULL)
    {
        printf(" %d  ",head->data);
        head = head ->next;
    }
    return 0;
}
