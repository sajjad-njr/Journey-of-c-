#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data ;
        next =NULL;
    }
};

Node* takeInput()
{
    int num;
    cin>>num;

    Node *head, *tail;
    head = NULL;
    tail = NULL;

    while(num != -1)
    {
        Node *n = new Node(num);
        if(head == NULL)
        {
            head = n ;
            tail = n;
        }
        else
        {
            tail->next = n ;
            tail = n;
        }
        cin >> num;
    }

    return head;
}
void print(Node *head)
{
    Node *temp = head ;

    while(temp != NULL)
    {
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout<<"NULL" <<endl;
}

int main()
{
    /* Node n1(90);
     Node n2(45);
     Node n3(34);

     Node *head = &n1;
     n1.next = &n2;
     n2.next = &n3;
     n3.next =  NULL;
     */
    Node *head = takeInput();
    print(head);

    return 0;
}
