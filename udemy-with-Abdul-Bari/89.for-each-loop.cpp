#include<iostream>

using namespace std ;

int main()
{
    int Ar[] = {2,3,5,6,7,8};

    /*
    for(int i = 0 ; i < 6 ; i++)
    {
        cout << " " <<Ar[i];
    }
    */
   /*
    for(int x : Ar)
    {
        cout << " " << x ;
    }
    */

   // when you do not know the data type you can use AUTO keyword
    for(auto x : Ar)
    {
        cout << " " << x ;
    }
    return 0;
}
