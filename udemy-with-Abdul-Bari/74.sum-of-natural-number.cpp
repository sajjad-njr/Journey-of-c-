#include<iostream>
using namespace std ;

int main()
{
    int n, i , sum = 0 ;

    cout << " Enter a number = ";
    cin >> n ;

    for( i = 1 ; i <= n ; i++)
    {
        cout << sum << " " << sum << "+" << i << endl;

        sum = sum + i ;
    }

    cout << "\n\nTotal Natural number sum = " << sum << endl;

    return 0 ;
}
