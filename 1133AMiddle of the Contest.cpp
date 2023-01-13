#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int a=h1*60;
    int a2=a+m1;
    int b=h2*60;
    int b2=b+m2;
    int c1=a2+b2;
    int d=c1/2;
    int e=d/60;
    int f=d%60;
    printf("%02d%c%02d",e,c,f);
    return 0;
}