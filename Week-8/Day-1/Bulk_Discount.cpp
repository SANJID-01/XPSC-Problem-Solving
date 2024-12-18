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

        sort(v.begin(), v.end());

        long long tc = 0;
        long long dis = 0;

        for (int i = 0; i < n; i++)
        {
            int cost = v[i] - dis;

            if (cost < 0)
            {
                cost = 0;
            }

            tc += cost;

            dis++;
        }

        cout << tc << endl;
    }

    return 0;
}
