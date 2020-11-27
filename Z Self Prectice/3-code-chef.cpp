#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t, A, B, C ;
    cin >> t;


    for( i = 0 ; i < t ; i++)
    {
        cin >> A >> B >> C ;


        if(A > B &&  A > C)
        {
            if( B > C)
            {
                cout << B << endl;
            }
            else if( B < C)
            {
                cout << C << endl;
            }

        }


        else if(B > A  &&  B > C)
        {
            if( A > C)
            {
                cout << A << endl;
            }
            else if( A < C)
            {
                cout << C << endl;
            }
        }
        else if(C > A  &&  C > B)
        {
            if( A > B)
            {
                cout << A << endl;
            }
            else if( A < B)
            {
                cout << B << endl;
            }
        }
    }

    return 0;
}
