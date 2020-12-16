#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int x ;
    double y,c;

    cin >> x ;
    cin >> y;

    if(x>y)
        cout << fixed << setprecision(2) << y <<endl;

    else
    {
        if(x%5==0 && x < y + .50)
        {
            c = y - x - 0.50;
            cout << fixed << setprecision(2) <<  c <<endl;
        }
        else
            cout << fixed << setprecision(2) <<  y <<endl;
    }
    return 0;
}
