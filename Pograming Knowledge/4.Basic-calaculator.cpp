#include<iostream>
using namespace std ;

int main()
{
    /*Variable declare*/
    //int x = 9090 ;
    //int z = 8976;

    //int sum = x + z + 90 ;
    //int sub = x - z -90;

    int x , y ;

    cout << " Enter a new number : " ;

    cin >> x ;

    cout << " Enter a new number : " ;

    cin >> y ;

    int add = x + y ;

    int  sub = x - y ;

    int mul = x * y ;

    int vag = x / y ;

    int reminder = x % y ;

    /*Print option*/

    cout << "Total sum  = " <<  add << endl;

    cout << "Total  sub= " <<  sub << endl;

    cout <<"Total  mul = " <<  mul << endl;

    cout << "Total  vag  = " <<  vag << endl;

     cout << "Total reminder  = " <<  reminder << endl;


    return 0 ;
}
