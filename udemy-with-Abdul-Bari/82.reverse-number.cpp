#include<iostream>
using namespace std ;

int main()
{
    int num , rem  , rev = 0 ;

    cout << "Enter a number : " ;
    cin >> num ;

    while ( num > 0)
    {
        rem = num % 10 ;
        num = num / 10 ;

        rev = rev * 10 + rem ;

    }

    cout << " Rem = " << rem ;

    return 0 ;
}
