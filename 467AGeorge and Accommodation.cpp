#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        int a=q-2;
        if(p<=a)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
} 