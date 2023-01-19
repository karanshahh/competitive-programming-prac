#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;

    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n" << a + b << "\n";
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}