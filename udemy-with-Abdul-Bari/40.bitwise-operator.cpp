#include<iostream>

using namespace std ;

int main()
{
    int a = 11 , b = 5 , c ;

    c = a & b ;
    cout << "C = " << c << endl;

   c = a | b ;
    cout << "C = " << c << endl;

    c = a ^ b ;
    cout << "C = " << c << endl;
    return 0 ;
}
