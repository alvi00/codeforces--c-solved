#include<bits/stdc++.h>
using namespace std;
int main()
{
    string alvi;
    string fahim;
    cin>>alvi;
    cin>>fahim;
    reverse(alvi.begin(),alvi.end());
    if(alvi==fahim)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

  
    return 0;
}