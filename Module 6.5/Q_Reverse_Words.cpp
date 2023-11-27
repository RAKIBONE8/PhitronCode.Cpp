#include <bits/stdc++.h>
using namespace std;
void ReverseWords(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        while (i < s.length() && s[i] != ' ')
        {
            st.push(s[i]);
            i++;
        }
        
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        if(i<s.length() && s[i] == ' ')
        {
            cout<<' ';
        }
    }
}

int main()
{
    string s;
    getline(cin, s);

    ReverseWords(s);
    return 0;
}