#include<iostream>
using namespace std ;

int add(int x , int y) ;

int main()
{
    int a = 8 ;
    int b = 2 ;

    int z = add(a,b);

    cout << "\n\tTotal amount = " << z << endl;
    return 0 ;
}

int add(int x , int y)
{
    return x + y ;
}
