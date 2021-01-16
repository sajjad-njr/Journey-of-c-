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

    cin>>num;

    while(num != -1)
    {
        Node *new_node = new Node(num);
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
        cin>>num;
    }
    return head;
}

void printj(Node *head)
{
    while(head != NULL)
    {
        cout << head->n << "->";
        head = head->next;
    }
}

int main()
{
    Node *j = takeInput();
    printj(j);

    return 0;
}
