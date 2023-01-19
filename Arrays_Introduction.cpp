#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r;
    cin >> r;

    int arr[r];

    for (size_t i = 0; i < r; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    for (int i = r - 1; i >= 0; i--)
        cout << arr[i] << " ";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    solve();
}