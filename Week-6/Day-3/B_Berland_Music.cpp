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

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int rat;
            cin >> rat;
            v.push_back({rat, i});
        }

        string s;
        cin >> s;

        sort(v.begin(), v.end());

        vector<int> v2(n);

        int cnt = 1;

        for (int i = 0; i < n; i++)
        {
            if (s[v[i].second] == '0')
            {
                v2[v[i].second] = cnt++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[v[i].second] == '1')
            {
                v2[v[i].second] = cnt++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}