#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , i , t ,k , Count = 0; //variable declare
    cin >> n >> t ;

    for( i = 0 ; i < n ; i++)
    {
        cin >> k;
        if(k%t == 0)
            Count++;
    }
    cout << Count << endl;
    return 0;
}
