#include<iostream>
using namespace std;

void Max(int a[])
{
    // int a[5] = { 89 , 99, 65, 43, 23};
    int i, max = a[0] ;

   // write  a loop find max value
    for( i = 0 ; i < 5 ; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

    }

    cout << "Max is = " << max ;
}

int main()
{
    int A[5] = { 89, 99, 65, 463, 23453};
    //int i, max = a[0] ;

    Max(A);

    return 0 ;
}
