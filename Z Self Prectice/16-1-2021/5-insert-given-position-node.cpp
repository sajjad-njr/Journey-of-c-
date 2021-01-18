#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data )
    {
        this->data = data;
        next = NULL;
    }
};

Node* takeInput()
{
    Node *head , *tail;
    head = NULL;
    tail = NULL;

    int val; //val = value
    cin>>val;
    while(val != -1)
    {
        Node *new_node = new Node(val)
         if(head == NULL)
         {
             head = new_node;
             tail= new_node;
         }
         else
         {
             tail->next = new_node;
             tail = new_node;
         }
         cin >> val;
    }
    return head ;
}

void output(Node *h)
{
    while(h !=  NULL)
    {
        cout<< h->data << " -> ";
        h =h->next;
    }
    cout<<"NULL" << endl;
}

