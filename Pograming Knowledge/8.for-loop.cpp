#include<iostream>

using namespace std ;

int main()
{
    int i = 1 ;

    /* for ( i ; i < 30 ; i++)
     {
         if(i%2 == 0)
             cout<<i<<endl;
     }
     */

    for ( i ; i < 5 ; i++)
    {

        for(int j = 0 ; j < 10 ; j++)
        {
            cout<< " " << j ;
        }
        cout<<"\n\n" ;
    }


    return 0 ;
}
