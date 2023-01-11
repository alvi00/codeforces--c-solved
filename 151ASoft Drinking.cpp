#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=k*l;
    int a1=a/nl;
    int b=c*d;
    int c1=p/np;
    int arr[3];
    arr[0]=a1;
    arr[1]=b;
    arr[2]=c1;
    int low;
    for(int i=0;i<3;i++)
    {
        if(i==0 || arr[i]<low)
        {
            low=arr[i];
        }
    }
    int ans=low/n;
    cout<<ans<<endl;
    return 0;
}
