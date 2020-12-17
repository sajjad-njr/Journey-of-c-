#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string a = "Programing Hero";

   // all add if I do not mention all
    /*a.insert(3,"C_BOSS");
    cout << a  << endl;
*/

    // number of word insert that i mention
    a.insert(3,"C_BOSS",4);

    cout << a  << endl;
    return 0;
}

