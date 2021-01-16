#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int n;
    Node *next;

    Node(int n)
    {
        this->n = n;
        next = NULL;
    }
};

Node *takeInput()
{
    Node *head , *tail;

    head = NULL;
    tail = NULL;

    cin>>n;

    while(n != -1)
    {
        Node *new_node = new Node(n);
        if(head == NULL)
        {
            head  = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        cin>>n;
    }
    return head;
}
