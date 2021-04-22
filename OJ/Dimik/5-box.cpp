#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,t, j;
    cin>> a;


    while(a--)
    {
       cin>>t;

        for( i = 0 ; i < t; i++)
        {

            for(j = 1; j < i; j++)
            {
                cout<<"*";
            }
          cout<<endl;
        }
        cout<<endl;
    }


    return 0;
}
