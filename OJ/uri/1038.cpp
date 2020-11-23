#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    cin >> n ;
    switch(n)
    {
    case 1:
        cin >> m;
        cout << "Total: R$ " <<fixed << setprecision(2) << 4.00 * m <<" " <<endl;
        break;
    case 2:
        cin >> m;
        cout << "Total: R$ " <<fixed << setprecision(2) << 4.50 * m <<" " <<endl;
        break;
    case 3:
        cin >> m;
        cout << "Total: R$ " <<fixed << setprecision(2) << 5.00 * m <<" " <<endl;
        break;
    case 4:
        cin >> m;
        cout << "Total: R$ " <<fixed << setprecision(2) << 2.00 * m <<" " <<endl;
        break;
    case 5:
        cin >> m;
        cout  << "Total: R$ " << fixed << setprecision(2) << 1.00 * m <<" " <<endl;
        break;

    }
    return 0;
}

