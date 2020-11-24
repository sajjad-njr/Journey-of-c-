#include<iostream>
using namespace std;
int main()
{
    int T, N, sum;
    cin>>T;
    while(T--)
    {
        cin >> N;
        sum = 0 ;
        while(N>0)
        {
            sum += (N%10);
            N = N / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
