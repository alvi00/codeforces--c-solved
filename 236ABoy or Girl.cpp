#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            sum++;
        }
    }
    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

  return 0;
}

