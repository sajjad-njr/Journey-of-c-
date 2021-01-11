#include<iostream>
using namespace std;

class Node
{
public:
    int data ;
    Node *next;


    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int  main()
{
    //statistically
    Node n1(1);
    Node n2(3);

    n1.next = &n2;

    Node *head = &n1;

    cout << head->data << endl;

    cout << n1.data << " " << n2.data << endl;
    return 0;
}

