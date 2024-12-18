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
        int n, m, k;
        cin >> n >> m >> k;

        set<int> s;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int peri = 2 * (i + j);
                s.insert(peri);
            }
        }

        auto low = s.lower_bound(k);

        int diff = INT_MAX;

        if (low != s.end())
        {
            diff = min(diff, abs(*low - k));
        }

        if (low != s.begin())
        {
            low--;
            diff = min(diff, abs(*low - k));
        }

        cout << diff << endl;
    }

    return 0;
}
