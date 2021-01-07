#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int data ;
    Node *next;

    Node(int data)
    {
        this->data = data ;
        next = NULL;
    }
};

void print( Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head ->next ;
    }
    cout<<"NULL";
}

int main()
{
    Node n1(2);
    Node *head = &n1;

    Node n2(3);
    Node n3(13);
    Node n4(23);
    Node n5(33);
    Node n6(43);
    Node n7(53);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=&n6;
    n6.next=&n7;

    print(head);
    return 0;
}
