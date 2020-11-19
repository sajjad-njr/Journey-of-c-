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
            cout << "i = " << i << " and j = "  << j << " value insert =  " ;
            cin >>a[i][j] >> b[i][j];
        }
    }

//a and b show array

cout<<endl<<"\tNew A array : " << endl;

for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
             cout  << " " << a[i][j];
        }
        cout << endl;
    }
cout<<endl<<"\tNew B array : " << endl;

for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
             cout << " " << b[i][j];
        }
        cout << endl;
    }



//adding part

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {

           c[i][j] = a[i][j] + b[i][j];
            //cout << i << "and " << j << "value insert = " ;
            //cout<< " " << a[i][j];
            //cout << endl;
            //cout<< " " << b[i][j];

        }
    }
//out put
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            //cout << i << "and " << j << "value insert = " ;
            cout << " " << c[i][j];
        }
        cout << endl;
    }

}
