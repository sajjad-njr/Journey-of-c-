#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data ;
    Node *next ;

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

    int num;
    cin>>num;

    while(num != -1)
    {
        Node *new_node = new Node(num);

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node ;
        }
        cin >>num;
    }
    return head ;
}

void output(Node *h)
{

    while(h != NULL)
    {
        cout<< h->data << "->" ;
        h = h->next;
    }
    cout<<"NULL"<<endl;

}
int main()
{
    Node *a = takeInput();
    output(a);

    return 0 ;
}
