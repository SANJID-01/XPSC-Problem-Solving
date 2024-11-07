#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    while (n--)
    {
        string x, y;
        cin >> x >> y;
        mp[y] = x;
    }

    while (m--)
    {
        string i, j;
        cin >> i >> j;
        j.pop_back();
        cout << i << " " << j << "; #" << mp[j] << endl;
    }
    return 0;
}