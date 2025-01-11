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
        int x = 0;

        for (int i = 1; i < n; i++)
        {
            x += v[i - 1] + v[i];
        }

        sort(v.rbegin(), v.rend());

        int cnt = 0;

        for (int i = 1; i < n; i++)
        {
            cnt += v[i - 1] + v[i];
        }
        cout << max(cnt, x) << endl;
    }
    return 0;
}