#include<iostream>
using namespace std;

int add(int i , int j)
{

    return i + j ;
}

int main()
{
    int a , b , c , d ;
    cin >> a;
    for(int i = 0 ; i < a ; i++ )
    {
        cin >> b >> c;
        d = add(b,c);
        cout <<  d << endl;
    }

    return 0;
}
