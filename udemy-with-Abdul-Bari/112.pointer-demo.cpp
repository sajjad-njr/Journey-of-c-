#include<iostream>
using namespace std;

int main()
{
    int A[]{2,4,5,6,8,9,80};

    int *p = A ;

    cout << *p << endl;
    p++ ;
    cout << *p << endl;
    return 0;
}
