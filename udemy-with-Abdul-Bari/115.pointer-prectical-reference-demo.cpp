#include<iostream>
using namespace std;

int main()
{
    int x = 10 ;
    int &y = x;
    cout << "X = " << x << endl;
    y++;
    x++;

    cout << "X = " << x << endl;
    /*
    int b = 20 ;

    &y = b;
    */  //declare aging that why not work it
    cout << "B = " << b << endl;
    return 0;
}
