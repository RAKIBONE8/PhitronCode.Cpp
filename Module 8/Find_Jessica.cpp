#include<bits/stdc++.h>
using namespace std;

int main()
{
    string j = "Jessica";
    string s;
    getline(cin,s);
    
    stringstream ss(s);
    string w;
    int flag = 0;
    while(ss>>w)
    {
        if(w == j)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}