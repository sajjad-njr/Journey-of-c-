// check prime number

#include<iostream>
using namespace std;

int main()
{
    int number , i , count = 0 ;

    cout << "\n\tEnter a number : " ;
    cin >> number ;

    for( i = 1 ; i <= number ; i++)
    {
        if( number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "\n\tThis is Prime number : " << endl;
    }
    else
    {
        cout << "\n\tThis is not Prime number : " << endl;
    }

    return 0 ;
}
