#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "rakib";
    // cout<<s.size()<<endl;

    /*
    string a = "rakib is a peaceful soul";
    cout << a.capacity() << endl;
    string b = ",and also a good batsman";
    a.append(b);
    cout << a.capacity() << endl;
    cout << a.max_size() << endl;
    */

    // string in c++ the size will grow automatically till the maximum size (1073741823 in local machine).
    /*
    string s = "Rakib";
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    cout<<s.size()<<endl;
    */

    /*
    string s;
    s = "rakib";
    if (s.empty() == true)
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    */

   // input:

   string s;
   cin>>s;
   s.resize(5);
   s.resize(8,'X');
   cout<<s.size()<<endl;
   cout<<s<<endl;
    return 0;
}