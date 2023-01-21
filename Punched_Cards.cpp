#include <bits/stdc++.h>
using namespace std;

/* input: 1 1*/

void solve()
{
    int r, c;
    cin >> r >> c;
    int matrix[r][c];

    for (int i = 0; i < r; i++)
    {
        if (i == 0)
        {
            cout << ".";
            for (int j = 0; j < c; j++)
            {
                if (j == 0)
                {
                    cout << ".";
                }
                else
                {
                    cout << "+-";
                }
            }
            cout << "+" << endl;
            cout << "..";
            for (int j = 0; j < c - 1; j++)
            {
                cout << "|.";
            }
            cout << "|" << endl;
        }
        else
        {
            for (int j = 0; j < c; j++)
            {
                cout << "|.";
            }
            cout << "|" << endl;
        }
        for (int j = 0; j < c; j++)
        {
            cout << "+-";
        }
        cout << "+" << endl;
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