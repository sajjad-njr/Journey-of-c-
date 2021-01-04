#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t;

    if(t >= 1 && t <= 100)
    {
        while(t--)
        {
            int a;
            cin >> a ;
            if(a%2 == 0)
                cout << "even"<<endl;
            else
                cout << "odd"<<endl;
        }
    }

    return 0;
}
