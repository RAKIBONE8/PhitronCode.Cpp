#include <bits/stdc++.h>
using namespace std;
int countWords(string s)
{
    string w = " ";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        while (i < s.size() && (s[i] != ' ' && s[i] != '!' && s[i] != '?' && s[i] != ',' && s[i] != '.'))
        {
            w+=s[i];
            i++;
        }
        w+=' ';
    }
    stringstream ss(w);
    while(ss >> w)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    string s;
    getline(cin, s);

    cout << countWords(s) << endl;
    return 0;
}