#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b ;
    double c, sum = 0.0;
    for(int i = 0 ; i < 2 ; i++)
    {
        cin >> a >> b >> c;
        cout << endl;
        sum += b * c ;
    }
    cout << "VALOR A PAGAR: R$ "<<fixed << setprecision(2) << sum << endl;
    return 0;
}
