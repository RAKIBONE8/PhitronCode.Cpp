#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    // string :: iterator it;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl this is iteration;
    // }

    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    for(auto it = s.begin();it<s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}