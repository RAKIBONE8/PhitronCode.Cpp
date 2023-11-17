#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    
    while(cin.getline(s,100001))
    {
        int n = strlen(s);
        int a[n];
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                a[i] = int(s[i]);
                cnt++;
            }
        }
        sort(a,a+cnt);
        for(int i=0;i<cnt;i++)
        {
            s[i] =a[i];
        }
        cout<<s<<endl;
    }
    
    return 0;
}

// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;

// int main() {
//     char s[100001];

//     while (cin.getline(s, 100001)) {
//         int n = strlen(s);

//         // Explicitly add null character at the end
//         s[n] = '\0';

//         int a[n];
//         for (int i = 0; i < n; i++) {
//             a[i] = int(s[i]);
//         }

//         sort(a, a + n);

//         for (int i = 0; i < n; i++) {
//             s[i] = char(a[i]);
//         }

//         cout << s << endl;
//     }

//     return 0;
// }
