#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> mp;
    for (int x : a)
    {
        mp[x]++;
    }

    int mx = 0;

    for (auto [x, y] : mp)
    {
        mx = max(mx, y);
    }
    cout << mx << endl;

    return 0;
}