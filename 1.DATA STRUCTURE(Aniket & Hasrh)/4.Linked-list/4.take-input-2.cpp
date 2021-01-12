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
    int num;
    cin>>num ;
    Node *head, *tail;
    head = NULL;
    tail = NULL;

    while(num != -1)
    {
        Node *n = new Node(num);

        if(head == NULL)
        {
            head = n;
            tail = n ;
        }
        else
        {
            tail->next = n ;
            tail = n ;
        }
        cin>>num;
    }
    return head;
}

Node *takeInput2()
{
    int num;
    cin>>num ;
    Node *head, *tail;
    head = NULL;
    tail = NULL;

    while(num != -1)
    {
        Node *n = new Node(num);

        if(head == NULL)
        {
            head = n;
            tail = n ;
        }
        else
        {
            n->next = head ;
            head = n ;

        }
        cin>>num;
    }
    return head;
}


void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" -> " ;
        head= head ->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = takeInput();
    print(head);
    Node *rev = takeInput2();
    print(rev);

    return 0;
}
