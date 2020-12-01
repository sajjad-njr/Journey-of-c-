#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "sanda";

    cout << str.capacity() << endl;
    //inset use for data add in fix element in an index
    str.insert(3,"ji");
    cout << str << endl;

    // how change capacity
    string str1 = "san who is my best friend but she is more talent than me ";
     cout << str1 << endl;
    cout << str1.capacity() << endl;
    return 0;
}

