#include<bits/stdc++.h>
using namespace std;

// use for any data type
template<class t>
t maxim(t a, t b)
{
    return a > b ? a : b ;
}

int main()
{
    // Int data type use to TEMPLATE
    cout << maxim(8,9) << endl;

    // float value use to TEMPLATE
    cout << maxim(88.8f,9.6f) << endl;
    return 0;
}
