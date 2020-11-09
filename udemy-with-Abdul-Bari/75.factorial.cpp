#include<iostream>
using namespace std ;

int main()
{
    int i, m, n = 5 , fact = 1;


    for(i = 1 ; i <= n ; i++)
    {
        fact =   fact * i  ;
    }

    cout << fact ;

    return 0 ;
}
