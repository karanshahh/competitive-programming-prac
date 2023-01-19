#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int start = (n * n) - n + 1;
    int end = start + (n - 1) * 2;
    int sum = 0;
    for (int i = start; i <= end; i += 2)
    {
        sum += i;
    }

    cout << sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
