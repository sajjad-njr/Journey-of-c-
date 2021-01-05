#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a, j, countt = 0  ;

    int t ;
    cin >> t ;

    while(t--)
    {
        cin >> a ;
        countt++;
        cout << "Case " << countt <<":" << " " ;
        for(int i = 1; i <= a ; i++)
        {
            if(a%i==0)
            {
                cout << i << " ";
            }

        }
        cout << endl;
    }
    return 0;
}
