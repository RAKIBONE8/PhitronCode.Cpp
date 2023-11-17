#include<bits/stdc++.h>
using namespace std;
bool is_Possible(int arr[],int n,int sum)
{
    for(int i=0;i<n-2;i++)
    
        {
            for(int j=i+1;j<n-1;j++)
            {
                int k = j+1;
                while(k<n)
                {
                    if(arr[i]+arr[j]+arr[k] == sum)
                    {
                        return true;
                    }
                    k++;
                }
            }
        }   
        return false;
    
}
int main()
{
    int testcase;
    cin>>testcase;

    while(testcase>0)
    {
        int n,sum;
        cin>>n>>sum;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(is_Possible(arr,n,sum))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        testcase--;
    }
    return 0;
}