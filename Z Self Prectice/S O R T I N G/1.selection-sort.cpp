#include<bits/stdc++.h>
using namespace std ;

void SelelectionSort(int a[], int n )
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int imin = i ;

        for(int j = 0 ; j < n ; j++)
        {
            if(a[j] < a[imin])
                imin = j ;
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;

    }
}
