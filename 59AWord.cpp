#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0,c=0;
    char arr[100];
    gets(arr);
    int a=strlen(arr);
    for(int i=0;i<a;i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            s++;
        }
        else if(arr[i]>='A' && arr[i]<='Z')
        {
            c++;
        }
    }
    if(c>s)
    {
        cout<<strupr(arr);
        
    }
    else
    {
        cout<<strlwr(arr);
    }

    return 0;
}