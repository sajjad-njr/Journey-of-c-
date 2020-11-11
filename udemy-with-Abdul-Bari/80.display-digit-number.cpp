#include<iostream>
using namespace std ;

int main()
{
    int number , rem;

    cout << "Enter a Number : " ;
    cin >> number ;

    while( number > 0)
    {
        rem = number % 10 ;

        number = number / 10;

        cout << rem ;
    }

    return 0 ;
}
