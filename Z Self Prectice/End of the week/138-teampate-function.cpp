#include<bits/stdc++.h>
using namespace std ;

template<class M>
M bigValue(M a , M b ,M c)
{
    if(a > b && a > c )
        return a ;
    else if(b > a && b> c )
        return b ;
    else
        return c;
}

int main()
{
    cout << bigValue(43,26,7) << endl;
    return 0;
}
