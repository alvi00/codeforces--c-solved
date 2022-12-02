#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0,ab=0;
    cin>>a;

      ab=a/100;
      a=a%100;


      ab+=a/20;

      a=a%20;


      ab+=a/10;
      a=a%10;

      ab+=a/5;
      a=a%5;


      ab+=a/1;
      a=a%1;

    cout<<ab;
    return 0;
}
