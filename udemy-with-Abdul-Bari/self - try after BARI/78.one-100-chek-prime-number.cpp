// check prime number

#include<iostream>
using namespace std;

int main()
{
    int number, i, count = 0 ;

    //cout << "\n\tEnter a number : " ;
    //cin >> number ;

    for( i = 1 ; i <= 100 ; i++)
    {

        if(  100 % i == 0)
        {
            count++;

        }

}

    /*
        for( i = 1 ; i <= 100 ; i++)
        {
            if (count == 2)
            {
                cout << i << "    This is Prime number : " << endl;
            }
            else
            {
                cout << i << "    This is not Prime number : " << endl;
            }

        }
    */
    return 0 ;
}

