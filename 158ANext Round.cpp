#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[100];
int n,j;
int p=0;
cin>>n>>j;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(a[i]>=a[j-1]&&a[i]>0)
    {
        p++;
    }
}
cout<<p;

}