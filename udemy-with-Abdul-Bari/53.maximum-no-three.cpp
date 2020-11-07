#include<iostream>

using namespace std ;

int main()
{
    int a , b , c ; // variable declare

    cout << "\tEnter three number : ";
    //user input
    cin >> a >> b >> c ;

    if ( a > b && a > c )
    {
        cout << " The maximum is " << a << endl;
    }
    else
    {
        if ( b > c)
        {
            cout << " the maximum is " << b << endl;
        }
        else
        {
            cout << " the maximum is " << c << endl;
        }
    }

    return 0 ;

}
