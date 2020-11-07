#include<iostream>
using namespace std ;

int main()
{

        int age ;

        cout << "Enter your age : " ;
        cin >> age ;

        if ( age > 1)
        {
            if (age > 10)
            {
                if ( age < 30)
                {
                    cout << " you are young" ;
                }
                else
                {
                    cout << " you are not young" ;
                }
            }
            else
            {
                cout << " under 10 \n";
            }
        }
        else
        {
            cout << " wrong input\n";
        }

    return 0 ;
}
