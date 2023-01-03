#include<bits/stdc++.h>
using namespace std;
int main()
{
    string alvi,fahim;
    cin>>alvi;
    for(int i=0;i<alvi.size();i++)
    {
        if(alvi[i]!='+')
        {
            fahim.push_back(alvi[i]);
        }
    }
    sort(fahim.begin(),fahim.end());
    cout<<fahim[0];
    for(int i=1;i<fahim.size();i++)
    {
        cout<<"+"<<fahim[i];
    }

  return 0;
}

