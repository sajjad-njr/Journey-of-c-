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
            head = new_node; tail = new_node;
        }else
        {
            tail->next = new_node;
            tail = new_node;
        }
        cin >> num;

    }
    return head;

}

void print(Node *head,int n )
{
    int i , count = 0 ;
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        count ++;
        temp = temp ->next;

    }

    if(n > count)
    {
        cout <<endl<<  "The number is big than total element of Nodes " << endl;
    }
    else
    {
        while(i <= count)
        {
            if(i==n)
            {
                cout << head ->data << endl;
                break;
            }

            i++;
        }
    }
}

int main()
{
    Node *head = takeInput();
    int n ; cin>>n ;

    print(head ,n);

    return 0;
}
