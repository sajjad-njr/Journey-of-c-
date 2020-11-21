#include<iostream>
using namespace std ;

int main()
{
    //int a[20];

    int *p = new int[20];
    cout << p << endl;
    delete []p;
    p = new int[400];
    cout << p << endl;
    cout << " size = " << sizeof p << endl;
    /*int size ;

    cout << "Enter the size : ";
    cin >> size ;

    int a[size] ;

    cout << " size = " << sizeof a << endl;
*/
    return 0;
}

