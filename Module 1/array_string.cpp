#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Array
    /*
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    */

   // String

   char s[100];
   int n;
   cin>>n;
   getchar(); // for ignoring the enter after the integer input;
   cin.getline(s,100);

   cout<<n<<endl;
   cout<<s<<endl;
    return 0;
}