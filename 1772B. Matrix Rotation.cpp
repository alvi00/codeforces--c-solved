#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b && c < d && a < c && b < d)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < 4; i++)
            {
                if (a < b && c < d && a < c && b < d)
                {
                    flag = true;
                    break;
                }
                int tempa = a;
                int tempb = b;
                int tempd = d;
                a = c;
                b = tempa;
                d = tempb;
                c = tempd;
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
