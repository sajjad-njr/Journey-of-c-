#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next
    } Node;


int main()
{
    Node *head = NULL;
    Node  *second = NULL;
    Node *third = NULL;

    head =(Node*) malloc(sizeof(Node));
    second=(Node*) malloc(sizeof(Node));
    third   =(Node*) malloc(sizeof(Node));

}
