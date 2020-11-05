#include<iostream>
using namespace std ;

int main()
{
    int a = 5 , b ;

    b = 2 * ++a + 2 * ++a ;//+ 2 * ++a ;

   // b = 2 * a++ + 2 * a++  + 2 * a++ ;

    cout << "b = " << b << " "<< " a = " << a <<  endl;

    return 0 ;
}

