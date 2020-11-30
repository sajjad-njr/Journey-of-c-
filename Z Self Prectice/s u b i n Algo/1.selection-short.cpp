#include<iostream>
using namespace std ;

void Sc(int a[], int n)
{
    int i, j, indexMin, temp;

    for(i = 0 ; i < n - 1 ; i++)
    {
        indexMin = i;
        for(j = i + 1; j < n ; j++)
        {
            if(a[j] < a[indexMin])
                indexMin = j;

        }

        if(indexMin != i)
        {
            temp = a[i];
            a[i] = a[indexMin];
            a[indexMin] = temp;
        }
    }
}

int main()
{
    int a[4] = { 6, 5, 3, 2};

    Sc(a,4);

     for(int i = 0 ; i < 4 ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
