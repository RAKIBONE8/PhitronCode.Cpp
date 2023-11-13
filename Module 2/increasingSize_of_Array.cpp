#include<bits/stdc++.h>
using namespace std;

int main()
{
    int * a = new int [3];
    int * b = new int [3];

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        b[i] = a[i]; // taking intput of a array and copying to b array;

    }

    delete[] a; // now a array is deleted from dynamic memory,but b is available;
    
    a = new int [5]; // here the size of a array is expanded;

    for(int i=0;i<3;i++)
    {
        a[i] = b[i]; // b is saved in dynamic memory .So b is copying to a;

    }
    
    delete[] b; // here b is also deleted,But now we have the original array a,and its size is expanded;
    // now we can use the a array;

    a[3] = 20;
    a[4] = 70;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    // So at the end we change the size of a array in the run time using dynamic memory;
    return 0;
}