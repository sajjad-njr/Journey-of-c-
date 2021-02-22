#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left , *right;
}Node;

Node *createNode()
{
    int x;
    Node *newNode = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter -1 to stop the node ");
    scanf("%d",&x);

    if(x == -1)
    {
        return 0;
    }
    newNode->data = x;
    printf("\n\tEnter the left child of %d of  = ");
    newNode->left = createNode();
     printf("\n\tEnter the right child of %d of  = ");
    newNode->right = createNode();

    return newNode;
}

void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node *root = NULL;

    root = createNode();
    preorder(root);

    return 0;
}
