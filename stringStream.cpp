#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    string s;
    getline(cin, s);
    stringstream ss(s);


    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
    */

    string s;
    getline(cin, s);
    stringstream ss(s);
    
    stack<string>st;
    string word;
    while (ss >> word)
    {
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}