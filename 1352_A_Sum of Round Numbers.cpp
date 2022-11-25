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
    int a,b,r,j,k;
    cin>>a;
    int count=0;
    int d=a;
    for(int i=0;i<d!=0;i++)
    {
        d=a/10;
        count++;
    }
     b=count*(pow(10,count));
    int c=b/count;
    for(int i=0;i<=c==1;i++)
    {
        r=a;
        j=r/c;  
        k=j*c;
        cout<<k;
        c=c/10;
        a=a%10;
    }

}