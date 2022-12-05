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

   int alvi[3];
    int low,a=0;
    for(int i=0;i<3;i++)
    {
        cin>>alvi[i];
    }
    int max=0;
    for(int i=0;i<3;i++)
     {
        if(alvi[i]>max)
        {
            max=alvi[i];
        }
     }
    for(int i=0;i<3;i++)
      {
        if(i==0 || alvi[i]<low)
        {
            low=alvi[i];
        }
      }
    for(int i=0;i<3;i++)
    {
      a=a+alvi[i];
    }
    int result=a-(max+low);
    cout<<result<<endl;
}