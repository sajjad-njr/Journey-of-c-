#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int speed ;
    int v (9) ; //veg
    int u(6) ; //udi veg
    int a (5) ; //totron

   // cin >> v >> u >> a ;

    speed = (pow(v,2) , pow(u,2)) / ( 2 * a) ;

    cout << " Speed = " << speed ;

    return 0 ;
}
