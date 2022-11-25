#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
     for(int i=0;i<n;i++)
     {
        if(alvi[i]+k<=5)
        {
            count++;
        }
     }
     int ans=count/3;
     cout<<ans;
     cout<<alvi.max_size();
    
}