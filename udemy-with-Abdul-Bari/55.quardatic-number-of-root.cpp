// quadratic root [-b +- (b * b) - 4 a c ]/2a

#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    float a , b , c , r1 , r2 ;

    cout << " Enter three value of a equation : " ;
    cin >> a >> b >> c ;

    float d = b * b -  4 * a * c ;

    if ( d == 0)
    {
        cout << "Roots are equal and real \n";

        cout << endl << " roots are = " << (-b/(2*a)) ;
    }
    else if ( d > 0)
    {
        cout << " \nRoots are unequal ";
        cout << endl << " \nthe root is r1 = " << (-b + sqrt(b*b - 4*a*c))/(2 * a) ;

        cout << endl << "\n the root is r1 = " << (-b - sqrt(b*b - 4*a*c))/(2 * a) ;
    }
    else
    {
        cout << " \nThe root are imaginary number " ;
    }

    return 0 ;
}
