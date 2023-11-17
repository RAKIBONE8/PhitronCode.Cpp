#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int n = s.length();
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                cnt++;
            }
            a[i] = int(s[i]);
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            s[i] = a[i];
        }
        for(int i=cnt;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
