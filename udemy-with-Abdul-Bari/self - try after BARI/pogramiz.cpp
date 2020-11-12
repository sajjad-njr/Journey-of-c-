#include<iostream>

using namespace std ;
int main()
{
    int n , reverseNumber = 0 , rem ;

    cout << "Enter an integer number : ";
    cin >> n ;

    while( n != 0)
    {
        rem = n % 10;
        reverseNumber = reverseNumber * 10 + rem ;
        n = n / 10 ;
    }

    cout <<"\n\t" << reverseNumber ;

    return 0 ;
}
