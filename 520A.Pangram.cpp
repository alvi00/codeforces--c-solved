#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0;i<n;i++)
    {
        arr[i]=towlower(arr[i]);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    if(count==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}