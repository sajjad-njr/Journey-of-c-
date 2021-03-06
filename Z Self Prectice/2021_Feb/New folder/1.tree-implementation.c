#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *left, *right;
} Node;

Node *create()
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    int x;

    printf("\n\tEnter -1 for no node = ");
    scanf("%d",&x);

    if(x == -1)
    {
       return 0;

    }
    new_node->data = x ;
    printf("\nEnter the left child of = %d",x);
    new_node->left = create();

    printf("\nEnter the  right child of = %d",x);
    new_node->right = create();

    return new_node;
}

void post_order(Node *root)
{
    if(root == 0)
    {
        return ;
    }
    post_order(root->left);
    post_order(root->right);

    printf(" %d ",root->data);
}

int main()
{
    Node *root = create();

    post_order(root);

}
