#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t, a,countt = 0  ;
    cin >> t ;

    if(t>= 1 && t <= 10)
    {
        while(t--)
        {
            cin >> a ;
            countt++;
            if(a >=1 && a <= 100000)
            {
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

        }
    }

    return 0;
}
