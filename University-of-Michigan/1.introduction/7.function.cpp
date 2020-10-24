#include<iostream>

using namespace std ;

int addition(int a , int b )
{
    int  add ;

    add = a + b ;

    return add ;
}

int main()
{
    int c = 9 ;

    int d = 10 ;

    int g = addition(9,10);

    cout << " Total sum = " << g <<endl ;

    return 0 ;
}
