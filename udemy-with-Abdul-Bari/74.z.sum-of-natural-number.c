#include<iostream>
using namespace std ;

int main()
{
    int n, i = 1, sum = 0 ;

    cout << " Enter a number = ";
    cin >> n ;

     while( i <= n)
    {
        cout << sum << " " << sum << "+" << i << endl;

        sum = sum + i ;
        i++;
    }

    cout << "\n\nTotal Natural number sum = " << sum << endl;

    return 0 ;
}

