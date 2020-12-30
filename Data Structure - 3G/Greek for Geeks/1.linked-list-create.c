#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;


int main()
{
    Node *head = NULL;
    Node  *second = NULL;
    Node *third = NULL;

    head = (Node*) malloc(sizeof(Node));
    second = (Node*) malloc(sizeof(Node));
    third  =(Node*) malloc(sizeof(Node));

    head->data = 1 ;
    //scanf("%d",&head->data);
    head ->next = second;

    second ->data = 2 ;
    second ->next = third;

    third ->data = 3 ;
    third ->next = NULL;

    printf("\n\tis 1st node value = %d ",head->data);
    return 0;

}
