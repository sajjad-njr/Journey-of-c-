#include<iostream>

using namespace std ;

int main()
{
    int a = 11 , b = 5 , c ;

    c = a & b ;
    cout << "\nC = " << c << endl;

   c = a | b ;
    cout << "\nC = " << c << endl;

    c = a ^ b ;
    cout << "\nC = " << c << endl;

    int x = 5 , y ;

    y = x <<1;
    cout << " \nY = " << y << endl;

    y = ~x;
    cout << " \nY = " << y << endl;

    return 0 ;
}
