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
    return 0;
}
void solve(int t)
{
    int df,cf,uf,d,c;
    cin>>df>>cf>>uf>>d>>c;
    if(uf==0)
    {
        if(df>=d && cf>=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else{
    int a=max(0,d-df);
    int b=max(0,c-cf);
    c=a+b;
    if(c<=uf)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}