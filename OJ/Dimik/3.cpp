#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    t = 1000;

    while(t)
    {

        cout << t << "\t";
        if( (t-1) %5==0)
        {

           cout<< endl;
        }

        t--;
    }


    return 0;
}

