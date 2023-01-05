#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
} 