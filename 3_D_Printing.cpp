#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int C, M, I, K;
    int x[3][4];

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
            sum += x[i][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": " << endl;
        solve();
    }
}