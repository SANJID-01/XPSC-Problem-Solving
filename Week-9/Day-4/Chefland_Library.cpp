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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            int y = i + 1;

            m[x] = max(m[x], y);
        }

        int cnt = 0;
        for (auto it : m)
        {
            cnt += it.second;
        }

        cout << cnt << endl;
    }

    return 0;
}
