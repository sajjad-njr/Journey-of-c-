#include<iostream>
using namespace std ;
/*
    1  2   3   4
    5  6   7   8
    9  10  11  12
    13 14  15  16
*/

int main()
{
    int i,j,count = 1 ;

    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            cout << count++<< "  ";
        }
        cout << endl;
    }
    return 0;
}
