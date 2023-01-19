#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int gre;
    if(a>b && a>c && a>d)
    {
        gre = a;
    }
    else if(b>a && b>c && b>d)
    {
        gre = b;
    }
    else if(c>a && c>b && c>d)
    {
        gre = c;
    }
    else if(d>a && d>b && d>c)
    {
        gre = d;
    }
    cout << gre;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}