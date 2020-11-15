#include<iostream>

using namespace std ;

int main()
{
    int A[10],n = 10,i ;

    for( i = 0 ; i < 10 ; i++ )
    {
        cin >> A[i] ;
    }
    int sum = 0 ;


    for( i = 0 ; i < 10 ; i++ )
    {
         sum = sum + A[i];
    }
     cout << endl << " Total sum = " << sum << endl;
     return 0 ;
}
