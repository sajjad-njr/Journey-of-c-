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
    int largest = INT_MIN;


    for(int i = 0 ; i < n ; i++)
    {
        if(A[i] > largest)
            largest = A[i];
    }

    cout << "\n\tLargest element of array = " <<largest;
    return 0;
}

