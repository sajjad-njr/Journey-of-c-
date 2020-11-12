#include<iostream>
using namespace std ;

int main()
{
    int ar[10] , i ;

    for(i = 0 ; i < 10 ; i++)
    {
        cin>>ar[i];
    }


   int b , match = 0 , rep = 1 ;

   cout << "Enter finding Number : " ;
   cin >> b;



    for(i = 0 ; i < 10 ; i++)
    {
        //cout << " " << ar[i] << endl;
        if(ar[i] == b)
        {
            match = 1;

            break;
        }

    }

    if(match != 0)
    {
        cout << b << ' ' < "Data is found" << endl;
    }
    else
    {
         cout << b << ' ' <<"Data is not found" << endl;
    }

    return 0 ;

}
