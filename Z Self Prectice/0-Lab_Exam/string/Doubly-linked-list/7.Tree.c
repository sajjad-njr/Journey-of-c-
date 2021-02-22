#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node *createNode()
{
    int x;
    Node *newNode = (Node*)malloc(sizeof(Node));
    printf("\n\tEnter -1 for no node = ");
    scanf("%d",&x);

    if(x == -1)
    {
        return 0;
    }
    newNode->data = x;

    printf("\n\tEnter the left child of %d ",x);
    newNode->left = createNode();
    printf("\n\tEnter the right child of %d ",x);
    newNode->right = createNode();
    return newNode;
}

void inorder(Node *root)
{
    if(root == 0)
    {
        return ;
    }
    else
    {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}

int main()
{
    Node *root = NULL;
    root = createNode();
    inorder(root);

    return 0;
}
