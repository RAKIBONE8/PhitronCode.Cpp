#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

//MIN - MAX; (Have to use header(#include<algorithm>));
/*
int main()
{
    int a,b;
    cin>>a>>b;

    int minm = min(a,b);
    int maxm = max(a,b);

    cout<<minm<<endl<<maxm;

    If you want min-max from more than 2 variable then you have to follow this

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int mn = min({a,b,c,d});
    int mx = max({a,b,c,d});

    cout<< mn << " " << mx << endl;
    return 0;
}
*/

// Swap;(Have to use the header(#include<utility>));
int main ()
{
   int a,b;
   cin>>a>>b;
   
   swap(a,b);
   cout<<a<<" "<<b;
   return 0;
}