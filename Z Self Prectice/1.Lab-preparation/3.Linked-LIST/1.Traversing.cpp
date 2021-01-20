#include<bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node* createNode()
{
    Node *head , *tail;
    head = NULL;
    tail = NUll;

    int num;
    cin>>num

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

void print(*head)
{
    while(head != NULL)
    {
        cout << head->data << "-> ";
    }
    cout <<"NULL" << endl;
}

