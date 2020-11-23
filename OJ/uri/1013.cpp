#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a , b , c;


    cin >> a >> b >> c ;

    int m = (a + b + a * b * c * (a - b)) / 2 ;

    cout << m;
    return 0;

}
