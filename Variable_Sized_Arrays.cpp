#include <bits/stdc++.h>
using namespace std;

#define MAX 10000
#define pb push_back


void solve()
{
    int n, q, r, c, s;
    cin >> n >> q;

    vector<vector<int>> a;
    
    for (int i = 0; i < n; i++)
    {
        cin >> s;  
        vector<int> b;
        for(int j = 0; j < s; j++) {
            int a;
            cin >> a;
            b.pb(a);
        }
        a.pb(b);
    }

    for (int i = 0; i < q; i++) {
        cin >> r >> c;
        cout << a[r][c] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}