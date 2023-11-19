#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; // there is no costant size in string(in c++);
    s = "Rakib";
    // cout<<s;
    // cout<<s.length();
    // cout<<s.size(); both function is same;
    
    string s1 = "rakib";
    string s2 = "rakib";

    if(s1 == s2) // here dont have to use strcmp function like c (we directly can compare two string in c++);
    {
        cout<<"same string\n";
    }
    else
    {
        cout<<"not same\n";
    }
    return 0;
}