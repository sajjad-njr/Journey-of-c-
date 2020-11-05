#include<iostream>

using namespace std ;

int main()
{
    int x = 9 , y ;

    cout << " Before x  = " << x << endl;
    y = x++ ;

    cout << " Y = " << y << endl;
    cout << " X = " << x << endl;

    return 0 ;

}
