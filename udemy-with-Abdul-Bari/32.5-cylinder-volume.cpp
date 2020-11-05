#include<iostream>
using namespace std ;
#define PI 3.1416

int cylinderVolume(int h , int r) ;

int main()
{
    int h , r ;
    cout << "Enter cylinder height and radius = " ;
    cin >> h >> r ;

    cout << " Volume = " <<cylinderVolume(67,6) ;
    return 0;
}


int cylinderVolume(int h , int r)
{
    float volume = PI * r * r * h ;

    return  volume ;
}
