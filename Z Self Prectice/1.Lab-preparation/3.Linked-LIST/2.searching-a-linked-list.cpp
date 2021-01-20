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

void  searchInList(Node *head , int data)
{
    while(head != NULL)
    {

        int pos = 1 ;
        if(data == head->data)
        {
             //cout << head->data << "-> ";

             cout<<"Data found = " <<;
             break;
        }
        head = head -> next;
        pos++;
    }

}

int main()
{
    Node *h = createNode();
    int nu;
    cout<<"Enter data that want to search = ";
    cin>>nu;

    searchInList(h , nu);
    return 0;
}

