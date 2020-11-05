#include<iostream>

using namespace std ;

int main()
{
    //step - 01

   /* int x = 9 , y ;

    cout << " Before x  = " << x << endl;
    y = x++ ;

    cout << " Y = " << y << endl;
    cout << " X = " << x << endl;
*/


   //step 2
    /*
    int x = 9 , y , z = 10;

    cout << " Before x , z  = " << x  << " " << z << endl;

    y = x++ * z ;

    cout << " Y = " << y << endl;
    cout << " X = " << x << endl;
    cout << " Z = " << z<< endl;
*/

    //step - 3  Pre increment

    int x = 9 , y , z = 10;

    cout << " Before x , z  = " << x  << " " << z << endl;

    y = ++x * z ;

    cout << " Y = " << y << endl;
    cout << " X = " << x << endl;
    cout << " Z = " << z<< endl;

    return 0 ;

}
