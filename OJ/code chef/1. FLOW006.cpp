#include<iostream>
using namespace std;
int main()
{
    int T , N , sum = 0 ;
    cin>>T >> N;

    while(T--)
    {
         for(int j = 0 ; j < N ; j++)
         {
             cin >> j;
             sum += j;
         }
         cout << "Sum = " << sum << endl;
    }

    return 0;
}
