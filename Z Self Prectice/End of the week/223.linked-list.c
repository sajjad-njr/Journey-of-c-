#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
//Structure declaration for the node
struct node
{
    int info;
    struct node *link;
}*start;
//This function will create a new linked list
void Create_List(int data)
{
    struct node *q,*tmp;
//Dynamic memory is been allocated for a node
    tmp= (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=NULL;
    if(start==NULL) /*If list is empty*/
        start=tmp;
    else
    {
        /*Element inserted at the end*/
        q=start;
        while(q->link!=NULL)
            q=q->link;
        q->link=tmp;
    }
}/*End of create_list()*/
//This function will add new element at the beginning of the linked list
void AddAtBeg(int data)
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
}/*End of addatbeg()*/
//Following function will add new element at any position
void AddAfter(int data,int pos)
{
    struct node *tmp,*q;
    int i;
    q=start;
//Finding the position to add new element to the linked list
    for(i=0; i<pos-1; i++)
    {
        q=q->link;
        if(q==NULL)
        {
            printf ("\n\n There are less than %d elements",pos);
            getch();
            return;
        }
    }/*End of for*/
    tmp=(struct node*)malloc(sizeof (struct node));
    tmp->link=q->link;
    tmp->info=data;
    q->link=tmp;
}/*End of addafter()*/
//Delete any element from the linked list
void Del(int data)
{
    struct node *tmp,*q;
    if (start->info == data)
    {
        tmp=start;
        start=start->link; /*First element deleted*/
        free(tmp);
        return;
    }
    q=start;
    while(q->link->link ! = NULL)
    {
        if(q->link->info == data) /*Element deleted in between*/
        {
            tmp=q->link;
            q->link=tmp->link;
            free(tmp);
            return;
        }
        q=q->link;
    }/*End of while */
    if(q->link->info==data) /*Last element deleted*/
    {
        tmp=q->link;
        free(tmp);
        q->link=NULL;
        return;
    }
    printf ("\n\nElement %d not found",data);
    getch();
}/*End of del()*/
//This function will display all the element(s) in the linked list
void Display()
{
    struct node *q;
    if(start == NULL)
    {
        printf ("\n\nList is empty");
        return;
    }
    q=start;
    printf("\n\nList is : ");
    while(q!=NULL)
    {
        printf ("%d ", q->info);
        q=q->link;
