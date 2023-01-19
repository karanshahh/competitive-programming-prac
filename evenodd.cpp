#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int number = -1;
    number = number<0?number*-1:number;
    string val = number%2==1?"Odd":"Even";
    cout << val;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}