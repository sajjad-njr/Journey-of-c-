#include<iostream>
using namespace std ;

int main()
{
    int a[10] = {-6,-77,-8,-9,-5,-3,-19,-7,-8,-9};
    int i ;

    /*
    int max = INT_MIN ;

    for(auto x: a)
    {
        if(x > max)
            max = x;
    }
    cout << max << endl;
    */
    int min = INT_MAX ;

    for(auto x: a)
    {
        if(x < min )
            min = x;
    }
    cout << min << endl;

    return 0 ;
}

