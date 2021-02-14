#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of Array = ";
    int n;
    cin>>n;
    cout<<endl;

    int A[n];
    cout <<"Enter the element of array = ";

    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }

    // Normal

    for(int i = 0 ; i < n ; i++)
    {
         cout << A[i] << " ";
    }

    // Reverse

    cout << "\nNormal Array = ";
    for(int i = n-1 ; i >= 0; i--)
    {
         cout << A[i] << " " ;
    }

    return 0;
}


