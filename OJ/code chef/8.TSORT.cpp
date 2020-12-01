#include<bits/stdc++.h>
using  namespace std ;
int main()
{
    int n , i , j , imin;
    cin >> n ;
    int ar[n];

    for(i = 0 ; i< n ; i++)
    {
        cin >> ar[i];
    }

    for(i = 0 ; i < n ; i++)
    {
        imin = i ;
        if(ar[i] < imin)
            imin = i ;
    }
        cout <<  imin  << endl ;
    return 0;
}
