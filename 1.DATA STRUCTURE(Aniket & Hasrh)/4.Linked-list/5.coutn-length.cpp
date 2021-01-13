#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int data;
    Node *next;

    Node(int n)
    {
        this->n=n;
        next = NULL;
    }
};

void print(Node head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head ->next;
    }
    cout <<"NULL"<< endl;
}

int main()
{
    takeInput();
    print(head);

    return 0;
}
