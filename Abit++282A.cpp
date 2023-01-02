#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="X++" || s== "++X")
        {
            x++;
        }
        else if(s=="X--" || s== "--X")
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}