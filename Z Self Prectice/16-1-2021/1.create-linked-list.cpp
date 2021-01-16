#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data ;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{

    Node *head , *tail;
    head = NULL;
    tail = NULL;

    int n;

    cin >>n;

    while(n != -1)
    {
        Node *new_node  = new Node(n);

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        cin >> n;
    }
    return head ;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
int main()
{
    Node *head = takeInput();
    print(head);
}
