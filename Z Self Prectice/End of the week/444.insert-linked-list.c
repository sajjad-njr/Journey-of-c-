#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nfo;

void insert_front( nfo *list,int data)
{
    nfo *temp;
    temp=(nfo*)malloc(n*sizeof(nfo));
    temp->data=data;
    temp-next=list;
    list=temp;
}
