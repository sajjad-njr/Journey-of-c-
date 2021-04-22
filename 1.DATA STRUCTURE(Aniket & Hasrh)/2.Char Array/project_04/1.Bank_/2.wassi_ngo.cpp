#include<bits/stdc++.h>
#include<string>
using namespace std;

string month[] = {"Jan","Feb","Ma","Ap","Ma","JUN","LY","Ag","Sep","Oc","No","De"};

int a,n, i = 0;
int sum = 0;


int monthSal()
{
    int a,n, i = 0;

    n = 12;
    cout<< endl <<" enter month selary = " << endl;
    while(n--)
    {

        cout << month[i] << " = " ;

        cin >> a;
        if(a > 1000)
        {
            cout << "you got 10 % = " ;
            a = sum * 0.01;
            sum += a;
        }
        else
        {
            sum += a;
        }

        i++;
    }
    return sum;
}

void interest()
{
    int a ;
    cout<<"\nEnter the no of years  = ";
    cin>>a;

    if(a > 0 && a <= 5)
    {
        cout <<"\n\tInsterest at 0 - 5 years = " << sum * 0.01 + sum;

    }
    else
    {
        cout <<"\n\tInsterest at 0 - 5 years = " << sum * 0.11 + sum;
    }
}


void mainSub()
{

    int sum = 0;

    //cout <<"Total count = " << a;


    int aa;
    do
    {
        cout<<"\n1.Monthly Saving  \t2. Interest Showing \t3.Exit " <<endl;
        cin>>a;

        switch(a)
        {
        case 1 :
            //hospital();
            monthSal();
            break;
        case 2 :
            //cout << "Interest Showing" << endl;
            if(sum == 0)
            {
                int asa;
                cout << " At first save money then come here ";
                cout<<endl<<" For Enter money press = 1 or 11 for main menu";
                cin>>asa;

                if(asa == 1)
                {
                    monthSal();
                }
                else if(asa == 11)
                {
                    mainSub();
                }

            }
            else
            {
                interest();
                break;
            }

        case 3 :
            exit(0);
        default:
            cout<<"Wrong" << endl;
        }
    }
    while(aa != 0);
}

int main()
{

    mainSub();
    return 0;

}


