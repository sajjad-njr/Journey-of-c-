#include<iostream>

using namespace std ;

int main()
{
    // float not work mood operation

    /*float o(9.0) ;
    float g( 8.98) ;
      float   c = o % g ; */

   // int work %
   /*
    int  o(9.0) ;
    int   g( 8.98) ;
    int  c = o % g ;

    */

    // char work mood

    char a(97);
    char z(122);
    //char c  = a % z;

    int c = z % a ;

    cout << c ;
    return 0 ;

}
