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
        Node *new_node = new Node(val);
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

Node* insetGivenPosition(Node *head , int i , int data)
{
    if(i<1)
    {
        return head;
    }
    if(i == 1)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    int count = 2 ; // count = 1 then condition count i-1
    Node *avail = head ;
    while(count<= i && avail != NULL)
    {
        avail = avail->next;
        count++;
    }
    if(avail)
    {
        Node *newNode = new Node(data);
        newNode->next = avail->next;
        avail->next = newNode;
        return head ;

    }
    return head;
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

int main()
{
    Node *a = takeInput();
    int c , d ;
    cin >> c>>d;
    a = insetGivenPosition(a , c, d) ;
    output(a);

    return 0;

}
