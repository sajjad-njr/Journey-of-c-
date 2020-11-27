#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t, A, B, C ;
    cin >> t;


    for( i = 0 ; i < t ; i++)
    {
        cin >> A >> B >> C ;

        if(A > B &&  A > C  && B > C)
            cout << B << endl;

        else if(B > A &&  B > C  && A > C)
            cout << A << endl;

       else if(B > A &&  B > C  && A < C)
            cout << C << endl;
        else if(C > A &&  C >  B  && A > C)
            cout << A << endl;
    }

    return 0;
}
