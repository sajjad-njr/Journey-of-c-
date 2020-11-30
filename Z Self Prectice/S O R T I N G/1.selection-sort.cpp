#include<bits/stdc++.h>
using namespace std ;

void SelelectionSort(int a[], int n )
{
   int i , j ;
    for(  i = 0 ; i < n - 1 ; i++)
    {
        int imin = i ;

        for( j = i+1 ; j < n ; j++)
        {
            if(a[j] < a[imin])
                imin = j ;
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;

    }
}

int main()
{
    int b[6] = {34,36,1,9,3,2};
    SelelectionSort(b,6);

    for(int i = 0 ; i < 6 ; i++)
    {
        cout << b[i] << " ";
    }
     return 0;
}
