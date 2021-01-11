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

void print(*head)
{

}
int  main()
{
    //statistically
    Node n1(1);
    Node *head = &n1;

    Node n2(3);
    Node n3(31);
    Node n4(32);
    Node n5(33);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

   /* while (head != NULL)
    {
        cout << head->data << endl;
        head = head -> next;
    }
    */

    return 0;
}

