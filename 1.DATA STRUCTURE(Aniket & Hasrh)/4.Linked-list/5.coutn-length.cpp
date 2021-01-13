#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int n;
    Node *next;

    Node(int n)
    {
        this->n=n;
        next = NULL;
    }
};

Node *takeInput()
{
    int nu;
    cin>>nu;

    Node *head , *tail;
    head = NULL;
    tail = NULL;

    while(nu != -1)
    {
        Node *new_node = new Node (nu);

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
        cin >> nu;
    }
    return head ;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->n << " -> ";
        head = head ->next;
    }
    cout <<"NULL"<< endl;
}

void  countNode(Node *head)
{
    int cal = 0 ;
    while(head != NULL)
    {
        //cout << head->n << " -> ";
        cal++;
        head = head ->next;
    }
    cout <<endl<<"Total Node in the list = "<<cal<< endl;
}
int main()
{
    Node *head = takeInput();
    print(head);
    countNode(head);

    return 0;
}
