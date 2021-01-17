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
void iThposition(Node *head, int n )
{
    int count = 0 ;
    Node *avail = head ;
    while( avail != NULL)
    {
        count++;
        avail =  avail->next;
    }

    if(n>count || n < 0)
    {
        cout <<"Invalid position " << endl;
    }
    else
    {
        for(int j = 1 ; j <= n-1 ; j++)
        {
            head = head->next;
        }
        cout << " The "<<n <<"th position value = " << head->data << endl;
    }

}
int main()
{
    Node *a = takeInput();
    output(a);
    iThposition(a,3);
    return 0 ;
}
