#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int odd = 0;

        for (auto it : mp)
        {
            if (it.second % 2 != 0)
                odd++;
        }

        if (odd - 1 <= 0)
            odd = 0;
        else
            odd = odd - 1;

        if (k >= odd && k <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}