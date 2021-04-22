#include<bits/stdc++.h>
using namespace std;

void hospital();
void ibnSina();
void ibnSinaDoctors();
int ticket = 0, countT = 0;
char doctorName[20] = {'a','b','c','d','e','f','g','h','i','j','a','b','c','d','e','f','g','h','i','j'};

string name[] = {"sajjad","wassi","hime"};
/*
int main()
{

    int a;
    do
    {
        cout<<"1.Hospital \t2.Bank ";
            cin>>a;

        switch(a)
        {
        case 1 :
            hospital();
            break;
        case 2 :
            cout << "Sanjida" << endl;
            break;
        default:
            cout<<"Wrong" << endl;
        }
    }
    while(a != 0);

        return 0;

}
*/
int  main()
{

    int aa;

    hospital();

}
void hospital()
{
    cout<<"\n1.Ibn Sina \t2.Popular\t3.Al HAramain" << endl;
    int num;
    cin>>num;
    switch(num)
    {
    case 1:
        cout << "Ibn Sin" << endl;
        ibnSina();
        break;
    case 2:
        cout << "Popular" << endl;
        break;
    case 3:
        cout << "AL Haramain" << endl;
        break;
    default :
        cout<<"Wrong Input"<<endl;
    }
}

void ibnSina()
{
    cout<<"\n1.Medicine \t2.Arthopedix\t3.Mohila" << endl;
    int num;
    cin>>num;
    switch(num)
    {
    case 1:
        cout << "Medicine" << endl;

        for(int i = 0 ; i < 10 ; i++)
        {
            cout << " " <<doctorName[i] <<endl;
        }
        ibnSinaDoctors();

        break;
    case 2:
        cout << "Arthopedix" << endl;
        for(int i = 10 ; i < 20 ; i++)
        {
            cout << " " <<doctorName[i] <<endl;
        }
        ibnSinaDoctors();
        break;
    case 3:
        cout << "Mohila" << endl;
        break;
    default :
        cout<<"Wrong Input"<<endl;
    }
}

void ibnSinaDoctors()
{

    int a;
    cout <<" Do you want to back previous option press o or press 1 for purchase ticket = ";
    cin>>a;

    if(a == 1)
    {
        cout <<"NO" <<endl;
        int  n;
        cout << "Do you want buy any ticket = ";
        cin>>n;
        if(n==1)
        {
            cout << "Enter the doctor code number = ";
            cin>>ticket;
            if(ticket > 0 && ticket < 10)
            {
                countT++;
                cout <<" Boked ticket = " <<countT << " " <<doctorName[ticket]<< endl;

                cout <<" pres 1 to back previos menu or 11 to hostipal list ";
                cin>>n;
                if(n==1 || n == 11 || n == 111)
                {
                   if(n==1)
                   {
                       ibnSina();
                   }
                   else if(n==11)
                   {
                       hospital();
                   }
                   else
                   {
                       main();
                   }
                }
            }
            else
                cout<<"wrong input " <<endl;
        }
        //else
        //{
        //ibnSina();
        //}
    }
    else
    {

        int n;
        cout<<" previous step for press 1 = ";
        cin>>n;
        if(n == 1)
        {
            hospital();
        }
    }
}

/*
void hospital()
{
    int num;
    do
    {
        cout<<"\n1.Ibn Sina \t2.Popular\t3.Al HAramain" << endl;

        cin>>num;
        switch(num)
        {
        case 1:
            cout << "Ibn Sin" << endl;
            ibnSina();
            break;
        case 2:
            cout << "Popular" << endl;
            break;
        case 3:
            cout << "AL Haramain" << endl;
            break;
        default :
            cout<<"Wrong Input"<<endl;
        }
    }
    while(num != 0);
    }
*/
