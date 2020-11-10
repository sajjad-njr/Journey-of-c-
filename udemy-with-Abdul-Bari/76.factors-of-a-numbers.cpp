/*Factor of number */

#include<iostream>
using namespace std ;

int main()
{
    int number , i ;
    cout << " Enter a number : ";
    cin >> number ;

    // key : number % i == o

    for( i = 1 ; i <= number ; i++)
    {
        if(number % i == 0)
        {
            cout << i << " " ;
        }
    }

    return 0 ;
}
