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
    int count=0;
    int alvi[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>alvi[i][j];
        }
    }
    
    if(alvi[0][0]==0 && alvi[0][1]==0 && alvi[1][0]==0 &&alvi[1][1]==0)
    {
        cout<<"0"<<endl;
    }
    else if(alvi[0][0]==1 && alvi[0][1]==1 && alvi[1][0]==1 &&alvi[1][1]==1)
    {
        cout<<"2"<<endl;
    }
    else
    {
      cout<<"1"<<endl;
    }
    
}
