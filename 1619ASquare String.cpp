#include<bits/stdc++.h>
using namespace std;
void solve(int t);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve(t);
    }
}
void solve(int t)
{
    int count=0;
    string alvi;
    if(alvi.size()%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(alvi.size()%2==0)
    {
        sort(alvi.begin(),alvi.end());
        for(int i=0;i<alvi.size();i++)
        {
            if(alvi[i]==alvi[i+1])
            {
                count++;
            }
        }
        if(count==alvi.size()/2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
