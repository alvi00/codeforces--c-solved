#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,result;
    cin>>a;
    if(a%5==0)
    {
        result=a/5;
    }
    else if(a>5)
    {
        result=a/5+1;
    }
    else if(a<=5)
    {
        result=1;
    }
    
    cout<<result;
    return 0;
}