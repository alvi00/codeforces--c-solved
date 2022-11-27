#include<bits/stdc++.h>
using namespace std;
void solve (int t);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solve(t);
    }
    return 0;
}
void solve (int t)
{
    int n;
    cin>>n;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
int start=0;
for(int i=0;i<n;i++)
{
    if(alvi[i]==0)
    break;
start=i;
}
int end=n-1;
for(int i=n-1;i>=0;i--)
{
    if(alvi[i]==0)
    break;
end=i;
}
int a=end-start;
cout<<max(0,a)<<endl;
}
