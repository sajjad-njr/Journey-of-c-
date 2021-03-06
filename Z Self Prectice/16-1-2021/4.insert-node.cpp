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
void printIthPosotion(Node *head, int i)
{
    if(i<0)
    {
        cout<<"-1" <<endl;
        return ;
    }
    int count = 1 ;
    while(count <= i-1 && head != NULL)
    {
        head = head->next;
        count++;
    }
    if(head)
    {
        cout<<head->data << endl;

    }
    else
    {
        cout<<"-1"<< endl;
    }
}
/*

Node *iThposition(Node *head, int n )
{
    int count = 0 ;
    Node *avail = head ;
    Node *newNode = NULL;
    int val;
    Node *t = head;

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

        for(int j = 0 ; j <= n-1 ; j++)
        {
            t =  t->next;
        }

        cout<<"\n\tInsert New Node = " ;
       // cin>>newNode->data;
        cin>>val;
        newNode = new Node(val);


        t->next =  newNode;
       t = newNode;
    }

    return t;
}*/
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

    int b ;
    cout<<"Enter the position number that wanna show = ";
    cin>>b;

    //iThposition(a,b);
    printIthPosotion(a,b);

    return 0 ;
}
