#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    gets(arr);
    int flag=0;
    int a=strlen(arr);
    for(int i=0;i<a;i++)
    {
        if(arr[i]=='4' || arr[i]=='7')
        {
            flag++;
        }
    }
    

    if(flag==4 || flag==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}