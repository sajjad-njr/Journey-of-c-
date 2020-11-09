#include<iostream>
using namespace std ;

int main()
{
    int i = 0 , n ;

    cout << " Enter a number :" ;
    cin >> n ;

    for( i = 1 ; i <= 10 ; i++)
    {
        cout <<"\t" <<  n << " * " << i << " = " << n * i << endl;
    }

    return 0 ;
}
