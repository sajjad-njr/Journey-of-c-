#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int x ;
    double y,c;

    cin >> x ;
    cin >> y;


     if(x%5 == 0 && y >= (x+.5))
    {
        y = y - (x + .50);
    }
    cout << fixed << setprecision(2) << y ;

    return 0;
}
