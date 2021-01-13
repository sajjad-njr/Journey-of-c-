#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int data;
    Node *next ;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    int num;
    cin>>num;
    Node *head = NULL;
    Node *tail = NULL;

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
            tail = new_node;
        }
        cin >> num;

    }
    return head;

}

void print(Node *head)
{

    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp ->next;

    }


}

int len(Node *head)
{
    int count = 0 ;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void printIthNode(Node *head , int i)
{
    int n = len(head);

    if(i<0 || i > n-1)
    {
        cout << endl << "\tImpossible "<< endl;
        return ;
    }
    int pos = 1;
    while(pos <= i - 1)
    {
        head = head->next;
        pos++;
    }
     cout<<head->data<<endl;
}
int main()
{
    Node *head = takeInput();
    int nt;
    cin>>nt ;
    printIthNode(head , nt);

    //print(head,nt);

    return 0;
}
