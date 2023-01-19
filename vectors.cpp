#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    v.push_back(424);
    v.push_back(23);
    v.push_back(3245);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    sort(v.begin(), v.end());

    for (auto elem : v)
    {
        cout << elem << endl;
    }

}