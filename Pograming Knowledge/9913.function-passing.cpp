#include<iostream>

using namespace std ;

int sum(int a , int b) ;

int main()
{
    int c ;
    int d ;

    cin >> c;
    cin >> d;

    int z = sum(c,d);
    cout << "The 1st sum = "<< z << endl;


    int f ;
    int g ;

    cin >> f;
    cin >> g;

    int r = sum(f,g);
    cout << "The 1st sum = "<< r << endl;

    return 0 ;

}

int sum(int a , int b)
{
    return a + b ;
}
