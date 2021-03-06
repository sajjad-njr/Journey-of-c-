#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *link;

} Node;

Node *top = 0;

void push(int x )
{
    Node *new_node ;
    new_node = (Node*)malloc(sizeof(Node));

    new_node->data = x ;
    new_node->link = top;
    top = new_node ;
}


void display()
{
    Node *AVAIL;
    AVAIL = top;

    if(top == 0)
    {
        printf("\n\tUnderflow");
    }
    else
    {
        printf("\n");
        while(AVAIL != 0)
        {
            printf(" %d ",AVAIL->data);
            AVAIL = AVAIL->link;
        }
    }
}

void peek()
{
    if(top == 0 )
    {
        printf("\n\tStack is empty ");
    }
    else
    {
        printf("\n\tTop element is = %d",top->data);
    }
}

void pop()
{
     if(top == 0 )
    {
        printf("\n\tunderflow ");
    }
    else
    {
       top = top->link;
    }
}

int main()
{
   /* int a, b;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        push(b);
    }
*/

    push(4);
    push(54);
    push(400);
    push(780);
    push(540);
    push(78);

    display();
    peek();
    pop();

    printf("\n\n\tAfter Pop \n");

    peek();
    display();

    return 0;
}
