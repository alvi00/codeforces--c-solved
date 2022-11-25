#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    vector<int>alvi(n);
    for(int i=0;i<n;i++)
    {
        cin>>alvi[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(alvi[i]>max)
        {
            max=alvi[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        int b=max-alvi[i];
         a=a+b;
    }
    cout<<a;
    return 0;
}