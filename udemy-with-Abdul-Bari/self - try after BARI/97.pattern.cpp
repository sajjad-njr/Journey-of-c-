#include<iostream>
using namespace std;

int main()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(i > j)
               {
                    cout << " " ;
               }
               else if (i+j > 5)
               {
                    cout <<  j ;
               }
               else
               {
                     cout <<   "^" ;
               }
        }
        cout << endl;
    }

    return 0 ;
}
