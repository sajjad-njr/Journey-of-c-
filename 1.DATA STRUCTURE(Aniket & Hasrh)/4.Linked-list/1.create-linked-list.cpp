#include<bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int data ;
    Node *next;

    Node(int data)
    {
        this->data= data;
        next = NULL;
    }
};

int main()
{
    Node n1(1);
    Node n2(2);

    n2.next = &n1;

    cout << n1.data << " " << n2.data << endl;
    return 0;
}
