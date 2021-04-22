#include<bits/stdc++.h>
using namespace std;

int sequentialSearch(int X[], int size, int Z );

int main()
{
    int size, i = 0;

    cout << "\nEnter the size of Array = " ;
    cin>>size;

    int X[size];
    cout << "\nEnter the value of Array = " ;
    for( int j = 0 ; j < size ; j++)
    {
        cin>>X[j];
    }

    int Z ;
    cout << "\nEnter the searching data = " ;
    cin>>Z;

    int a = sequentialSearch(X,size, Z);

    if( a == 1)
        cout<<"Found data";
    else
        cout<<"Not Found data";

    return 0;
}
int sequentialSearch(int X[], int size, int Z )
{
    int i = 1;
    while(i <= size && Z != X[i])
    {
        i = i + 1;
    }
    if(i<= size)
        return 1;
    else
        return -1;
}
