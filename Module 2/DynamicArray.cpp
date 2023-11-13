/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *a = new int [n]; // Dynamic array syntax
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;;
    }
    return 0;
}
*/

// Returning function from function;
#include<bits/stdc++.h>
using namespace std;

int* funcn()
{
    int *a = new int [5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}

int main()
{  
    int *a = funcn();

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}