#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

Node* createNode()
{
    Node *head, *tail;
    head = NULL;
    tail = NULL;

    int num;
    cin>>num;

    while(num != -1)
    {
        Node *new_node = new Node(num);

        if(head == NULL)
        {
            head = new_node;
            tail  = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        cin >> num;
    }
    return head;
}
Node insertFirstPosition(Node *head)
{
   // Node* avail ;
   // avail = head;
   Node *tem = head;
    int value ;

    cout << "Enter the new value = ";
    cin>>value;

    Node *new_node = new Node(value );

    if( head == NULL)
    {
        cout <<"Overflow " << endl;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
//    return  tem;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << "-> ";
        head = head -> next;
    }
    cout <<"NULL" << endl;
}

int main()
{
    Node *h = createNode();
    Node *he = insertFirstPosition(h);
    print(he);
    return 0;
}

