#include<iostream>
using namespace std ;

int main()
{
    int i , j ;

    for(i = 0 ; i < 4; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            cout << i << j << "\t";
        }
        cout << endl;
    }
    return 0 ;
}
