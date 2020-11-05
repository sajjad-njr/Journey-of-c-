#include<iostream>
using namespace std ;

int main()
{
    int n, m ;
    cout << "Enter new a number how many run  : " ;

    cin >> m ;

    while(m--)
    {
        cin >> n ;

        cout << " Sum = " << n * (n + 1) / 2  << endl;
    }

    return 0 ;
}
