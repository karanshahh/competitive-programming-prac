#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n==0) {
        return 0;
    }
    if (n%2 == 1) {
        return n%10 + solve(n/10);
    }
    else {
        return solve(n/10);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << solve(234);
}