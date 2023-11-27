#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tCase;
    cin>>tCase;
    while(tCase>0)
    {
        string s,w;
        cin>>s>>w;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==w[0])
            {
                if(s.substr(i,w.length())==w)
                {
                    s.replace(i,w.length(),"#");
                }
            }
        }
        cout<<s<<endl;
        tCase--;
    }
    return 0;
}