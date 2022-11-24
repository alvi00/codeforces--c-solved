#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int flag=0;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]=='H'|| p[i]=='Q'|| p[i]=='9')
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}