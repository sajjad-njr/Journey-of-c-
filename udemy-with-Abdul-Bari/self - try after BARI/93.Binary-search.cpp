#include<iostream>
using namespace std ;

int main()
{
    int a[12] = {9,10,11,12,13,14,65,76,87,98,99,120};

    int l = 0, h = 11, mid, key ;

    cout <<"Enter a key : ";
    cin >> key ;

    while(l <= h)
    {
        mid = (l + h)/2 ;

        if (key == a[mid])
        {
            cout << " Data is found at = " << mid << "  position " << endl;
            return 0;
        }
        else if ( key < a[mid])
            h = mid - 1 ;
        else
            l = mid + 1;
    }
    cout << "Not found" << endl;
    return 0 ;
}
