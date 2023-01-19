#include <iostream>
using namespace std;

int binarySearch(int key, int arr[], int n)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << binarySearch(key, arr, n) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}