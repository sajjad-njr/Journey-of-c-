#include<iostream>
using namespace std ;

void Sum(int a[]);

int main()
{
    int A[10],n = 10,i ;

    for( i = 0 ; i < 10 ; i++ )
    {
        cin >> A[i] ;
    }
    int sum = 0 ;
    Sum(A);
    cout << endl << " Total sum = " << sum << endl;
    return 0 ;
}

void sum(int a[])
{
    int i, sum = 0 ;
    for( i = 0 ; i < 10 ; i++ )
    {
        sum = sum + a[i];
    }
}
