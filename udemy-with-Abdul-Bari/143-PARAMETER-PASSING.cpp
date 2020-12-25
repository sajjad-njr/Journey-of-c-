#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int ab = 100, bb = 200;

    swap(&ab, &bb);
    cout << ab << " " << bb ;
    return 0;
}
