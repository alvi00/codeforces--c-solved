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
   string s;
   cin>>s;
   reverse(s.begin(),s.end());
   vector<int>alvi;
   for(int i=0;i<s.size();i++)
   {
    int a=s[i]-'0';
    if(a!=0)
    {
     alvi.push_back(a*pow(10,i));
    }
   }
   cout<<alvi.size()<<endl;
   reverse(alvi.begin(),alvi.end());
      for(int i=0;i<alvi.size();i++)
      {
        cout<<alvi[i]<<" ";
      }
      cout<<endl;
}