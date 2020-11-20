#include<iostream>
using namespace std ;

int main()
{
    float num[100] , sum = 0.0 , average;
    int n ;
    cout <<"Enter the numbers of the array : " ;
    cin >> n;

    for(i = 0 ; i < n ; i++)
    {
        cout << i+1 << "Enter number : " ;
        cin >> num[i];

        sum += num[i];
    }

}
