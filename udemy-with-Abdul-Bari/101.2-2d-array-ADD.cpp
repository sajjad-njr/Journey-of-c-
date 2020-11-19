#include<iostream>
using namespace std ;

int main()
{
    int i , j , m , n;
    cout <<"Here M and N is the row and column of a Matrix" << endl;

    cin >> m >> n ;
    int a[m][n];
    int b[m][n];
    int c[m][n];

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            cout << i << "and " << j << "value insert = " ;
            cin >>a[i][j] >> b[i][j];
        }
    }

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            cout << i << "and " << j << "value insert = " ;
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
