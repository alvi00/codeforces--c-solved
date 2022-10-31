#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
 cout<<"Enter the weight"<<endl;
 cin>>a;
 if(a>=0 && a<=100)
    {
        if(a==2)
        {
            cout<<"No"<<endl;
        }
        else if(a%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    else
    {
        cout<<"Enter number between o and 100"<<endl;
    }

}

