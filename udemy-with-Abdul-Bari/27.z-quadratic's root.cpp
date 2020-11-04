#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int b(100) , a(90) , c(80) ;

    /*Quadratic equation */

    int r  ;

    r = ( - b + sqrt(b*b - 4 * a * c)) / (2 * a) ;

    cout << "R = " << r ;

    return 0 ;
}

